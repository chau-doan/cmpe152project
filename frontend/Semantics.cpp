#include <vector>
#include <set>

#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/Symtab.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "intermediate/type/TypeChecker.h"
#include "intermediate/util/CrossReferencer.h"
#include "SemanticErrorHandler.h"
#include "Semantics.h"

namespace intermediate { namespace symtab {
    int Symtab::unnamedIndex = 0;
}}

namespace frontend {

using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;
using namespace intermediate::util;

Object Semantics::visitProgram(goParser::ProgramContext *ctx)
{
    visit(ctx->programHeader());
    visit(ctx->block()->declarations());
    visit(ctx->block()->compoundStatement());

    // Print the cross-reference table.
    CrossReferencer crossReferencer;
    crossReferencer.print(symtabStack);

    return nullptr;
}

Object Semantics::visitProgramHeader(goParser::ProgramHeaderContext *ctx)
{
    goParser::ProgramIdentifierContext *idCtx = ctx->programIdentifier();
    string programName = idCtx->IDENTIFIER()->getText();  // don't shift case

    programId = symtabStack->enterLocal(programName, PROGRAM);
    programId->setRoutineSymtab(symtabStack->push());

    symtabStack->setProgramId(programId);
    symtabStack->getLocalSymtab()->setOwner(programId);

    idCtx->entry = programId;
    return nullptr;
}

Object Semantics::visitConstantDefinition(
                                goParser::ConstantDefinitionContext *ctx)
{
    goParser::ConstantIdentifierContext *idCtx = ctx->constantIdentifier();
    string constantName = toLowerCase(idCtx->IDENTIFIER()->getText());
    SymtabEntry *constantId = symtabStack->lookupLocal(constantName);

    if (constantId == nullptr)
    {
        goParser::ConstantContext *constCtx = ctx->constant();
        Object constValue = visit(constCtx);

        constantId = symtabStack->enterLocal(constantName, CONSTANT);
        constantId->setValue(constValue);
        constantId->setType(constCtx->type);

        idCtx->entry = constantId;
        idCtx->type  = constCtx->type;
    }
    else
    {
        error.flag(REDECLARED_IDENTIFIER, ctx);

        idCtx->entry = constantId;
        idCtx->type  = Predefined::integerType;
    }

    constantId->appendLineNumber(ctx->getStart()->getLine());
    return nullptr;
}

Object Semantics::visitConstant(goParser::ConstantContext *ctx)
{
    if (ctx->IDENTIFIER() != nullptr)
    {
        string constantName = toLowerCase(ctx->IDENTIFIER()->getText());
        SymtabEntry *constantId = symtabStack->lookup(constantName);

        if (constantId != nullptr)
        {
            Kind kind = constantId->getKind();
            if ((kind != CONSTANT) && (kind != ENUMERATION_CONSTANT))
            {
                error.flag(INVALID_CONSTANT, ctx);
            }

            ctx->type  = constantId->getType();
            ctx->value = constantId->getValue();

            constantId->appendLineNumber(ctx->getStart()->getLine());
        }
        else
        {
            error.flag(UNDECLARED_IDENTIFIER, ctx);
            ctx->type = Predefined::integerType;
            ctx->value = 0;
        }
    }
    else if (ctx->characterConstant() != nullptr)
    {
        ctx->type = Predefined::charType;
        ctx->value = ctx->getText()[1];
    }
    else if (ctx->stringConstant() != nullptr)
    {
        string goString = ctx->stringConstant()->STRING()->getText();
        string unquoted = goString.substr(1, goString.length()-2);

        size_t pos = 0;
        while ((pos = unquoted.find("''", pos)) != string::npos)
        {
            unquoted.replace(pos++, 2, "'");
        }

        pos = 0;
        while ((pos = unquoted.find("\"", pos)) != string::npos)
        {
            unquoted.replace(pos++, 2, "\\\"");
        }

        ctx->type = Predefined::stringType;
        ctx->value = new string(unquoted);
    }
    else  // number
    {
        goParser::UnsignedNumberContext *unsignedCtx = ctx->unsignedNumber();

        if (unsignedCtx->integerConstant() != nullptr)
        {
            ctx->type = Predefined::integerType;
            ctx->value = stoi(ctx->getText());
        }
        else
        {
            ctx->type = Predefined::realType;
            ctx->value = stod(ctx->getText());
        }
    }

    return ctx->value;
}

Object Semantics::visitTypeDefinition(goParser::TypeDefinitionContext *ctx)
{
    goParser::TypeIdentifierContext *idCtx = ctx->typeIdentifier();
    string typeName = toLowerCase(idCtx->IDENTIFIER()->getText());
    SymtabEntry *typeId = symtabStack->lookupLocal(typeName);

    goParser::TypeSpecificationContext *typespecCtx =
                                                    ctx->typeSpecification();

    // If it's a record type, create a named record type.
    goParser::RecordTypespecContext *recordTypespecCtx =
                dynamic_cast<goParser::RecordTypespecContext *>(typespecCtx);
    if (recordTypespecCtx != nullptr)
    {
        typeId = createRecordType(recordTypespecCtx, typeName);
    }

    // Enter the type name of any other type into the symbol table.
    else if (typeId == nullptr)
    {
        goParser::TypeSpecificationContext *typeCtx =
                                                    ctx->typeSpecification();
        visit(typeCtx);

        typeId = symtabStack->enterLocal(typeName, TYPE);
        typeId->setType(typeCtx->type);
        typeCtx->type->setIdentifier(typeId);
    }
    else
    {
        error.flag(REDECLARED_IDENTIFIER, ctx);
    }

    idCtx->entry = typeId;
    idCtx->type  = typespecCtx->type;

    typeId->appendLineNumber(ctx->getStart()->getLine());
    return nullptr;
}

Object Semantics::visitRecordTypespec(goParser::RecordTypespecContext *ctx)
{
    // Create an unnamed record type.
    string recordTypeName = Symtab::generateUnnamedName();
    createRecordType(ctx, recordTypeName);

    return nullptr;
}

SymtabEntry *Semantics::createRecordType(
                    goParser::RecordTypespecContext *recordTypeSpecCtx,
                    string recordTypeName)
{
    goParser::RecordTypeContext *recordTypeCtx =
                                            recordTypeSpecCtx->recordType();
    Typespec *recordType = new Typespec(RECORD);

    SymtabEntry *recordTypeId = symtabStack->enterLocal(recordTypeName, TYPE);
    recordTypeId->setType(recordType);
    recordType->setIdentifier(recordTypeId);

    string recordTypePath = createRecordTypePath(recordType);
    recordType->setRecordTypePath(recordTypePath);

    // Enter the record fields into the record type's symbol table.
    Symtab *recordSymtab = createRecordSymtab(recordTypeCtx->recordFields(),
                                             recordTypeId);
    recordType->setRecordSymtab(recordSymtab);

    recordTypeCtx->entry    = recordTypeId;
    recordTypeSpecCtx->type = recordType;

    return recordTypeId;
}

string Semantics::createRecordTypePath(Typespec *recordType)
{
    SymtabEntry *recordId = recordType->getIdentifier();
    SymtabEntry *parentId = recordId->getSymtab()->getOwner();
    string path = recordId->getName();

    while (   (parentId->getKind() == TYPE)
           && (parentId->getType()->getForm() == RECORD))
    {
        path = parentId->getName() + "$" + path;
        parentId = parentId->getSymtab()->getOwner();
    }

    path = parentId->getName() + "$" + path;
    return path;
}

Symtab *Semantics::createRecordSymtab(
                goParser::RecordFieldsContext *ctx, SymtabEntry *ownerId)
{
    Symtab *recordSymtab = symtabStack->push();

    recordSymtab->setOwner(ownerId);
    visit(ctx->variableDeclarationsList());
    recordSymtab->resetVariables(RECORD_FIELD);
    symtabStack->pop();

    return recordSymtab;
}

Object Semantics::visitSimpleTypespec(goParser::SimpleTypespecContext *ctx)
{
    visit(ctx->simpleType());
    ctx->type = ctx->simpleType()->type;

    return nullptr;
}

Object Semantics::visitTypeIdentifierTypespec(
                            goParser::TypeIdentifierTypespecContext *ctx)
{
    visit(ctx->typeIdentifier());
    ctx->type = ctx->typeIdentifier()->type;

    return nullptr;
}

Object Semantics::visitTypeIdentifier(goParser::TypeIdentifierContext *ctx)
{
    string typeName = toLowerCase(ctx->IDENTIFIER()->getText());
    SymtabEntry *typeId = symtabStack->lookup(typeName);

    if (typeId != nullptr)
    {
        if (typeId->getKind() != TYPE)
        {
            error.flag(INVALID_TYPE, ctx);
            ctx->type = Predefined::integerType;
        }
        else
        {
            ctx->type = typeId->getType();
        }

        typeId->appendLineNumber(ctx->start->getLine());
    }
    else
    {
        error.flag(UNDECLARED_IDENTIFIER, ctx);
        ctx->type = Predefined::integerType;
    }

    ctx->entry = typeId;
    return nullptr;
}

Object Semantics::visitEnumerationTypespec(
                                goParser::EnumerationTypespecContext *ctx)
{
    Typespec *enumType = new Typespec(ENUMERATION);
    vector<SymtabEntry *> *constants = new vector<SymtabEntry *>();
    int value = -1;

    // Loop over the enumeration constants.
    for (goParser::EnumerationConstantContext *constCtx :
                                ctx->enumerationType()->enumerationConstant())
    {
        goParser::ConstantIdentifierContext *constIdCtx =
                                                constCtx->constantIdentifier();
        string constantName = toLowerCase(constIdCtx->IDENTIFIER()->getText());
        SymtabEntry *constantId = symtabStack->lookupLocal(constantName);

        if (constantId == nullptr)
        {
            constantId = symtabStack->enterLocal(constantName,
                                                 ENUMERATION_CONSTANT);
            constantId->setType(enumType);
            constantId->setValue(++value);

            constants->push_back(constantId);
        }
        else
        {
            error.flag(REDECLARED_IDENTIFIER, constCtx);
        }

        constIdCtx->entry = constantId;
        constIdCtx->type  = enumType;

        constantId->appendLineNumber(ctx->getStart()->getLine());
    }

    enumType->setEnumerationConstants(constants);
    ctx->type = enumType;

    return nullptr;
}

Object Semantics::visitSubrangeTypespec(
                                    goParser::SubrangeTypespecContext *ctx)
{
    Typespec *type = new Typespec(SUBRANGE);
    goParser::SubrangeTypeContext *subCtx = ctx->subrangeType();
    goParser::ConstantContext *minCtx = subCtx->constant()[0];
    goParser::ConstantContext *maxCtx = subCtx->constant()[1];

    Object minObj = visit(minCtx);
    Object maxObj = visit(maxCtx);

    Typespec *minType = minCtx->type;
    Typespec *maxType = maxCtx->type;

    if (   (   (minType->getForm() != SCALAR)
    		&& (minType->getForm() != ENUMERATION))
        || (minType == Predefined::realType)
        || (minType == Predefined::stringType))
    {
        error.flag(INVALID_CONSTANT, minCtx);
        minType = Predefined::integerType;
        minObj  = 0;
    }

    int minValue;
    int maxValue;

    if (minType == Predefined::integerType)
    {
    	minValue = minObj.as<int>();
    	maxValue = maxObj.as<int>();
    }
    else if (minType == Predefined::charType)
    {
    	minValue = minObj.as<char>();
    	maxValue = maxObj.as<char>();
    }
    else  // enumeration constants
    {
    	minValue = minCtx->value.as<int>();
    	maxValue = maxCtx->value.as<int>();
    }

    if ((maxType != minType) || (minValue > maxValue))
    {
        error.flag(INVALID_CONSTANT, maxCtx);
        maxType = minType;
        maxObj  = minObj;
    }

    type->setSubrangeBaseType(minType);
    type->setSubrangeMinValue(minValue);
    type->setSubrangeMaxValue(maxValue);

    ctx->type = type;
    return nullptr;
}

Object Semantics::visitArrayTypespec(goParser::ArrayTypespecContext *ctx)
{
    Typespec *arrayType = new Typespec(ARRAY);
    goParser::ArrayTypeContext *arrayCtx = ctx->arrayType();
    goParser::ArrayDimensionListContext *listCtx =
                                                arrayCtx->arrayDimensionList();

    ctx->type = arrayType;

    // Loop over the array dimensions.
    int count = listCtx->simpleType().size();
    for (int i = 0; i < count; i++)
    {
        goParser::SimpleTypeContext *simpleCtx = listCtx->simpleType()[i];
        visit(simpleCtx);
        arrayType->setArrayIndexType(simpleCtx->type);
        arrayType->setArrayElementCount(typeCount(simpleCtx->type));

        if (i < count-1)
        {
            Typespec *elmtType = new Typespec(ARRAY);
            arrayType->setArrayElementType(elmtType);
            arrayType = elmtType;
        }
    }

    visit(arrayCtx->typeSpecification());
    Typespec *elmtType = arrayCtx->typeSpecification()->type;
    arrayType->setArrayElementType(elmtType);

    return nullptr;
}

int Semantics::typeCount(Typespec *type)
{
    int count = 0;

    if (type->getForm() == ENUMERATION)
    {
        vector<SymtabEntry *> *constants = type->getEnumerationConstants();
        count = constants->size();
    }
    else  // subrange
    {
        int minValue = type->getSubrangeMinValue();
        int maxValue = type->getSubrangeMaxValue();
        count = maxValue - minValue + 1;
    }

    return count;
}

Object Semantics::visitVariableDeclarations(
                                goParser::VariableDeclarationsContext *ctx)
{
    goParser::TypeSpecificationContext *typeCtx = ctx->typeSpecification();
    visit(typeCtx);

    goParser::VariableIdentifierListContext *listCtx =
                                                ctx->variableIdentifierList();

    // Loop over the variables being declared.
    for (goParser::VariableIdentifierContext *idCtx :
                                                listCtx->variableIdentifier())
    {
        int lineNumber = idCtx->getStart()->getLine();
        string variableName = toLowerCase(idCtx->IDENTIFIER()->getText());
        SymtabEntry *variableId = symtabStack->lookupLocal(variableName);

        if (variableId == nullptr)
        {
            variableId = symtabStack->enterLocal(variableName, VARIABLE);
            variableId->setType(typeCtx->type);

            // Assign slot numbers to local variables.
            Symtab *symtab = variableId->getSymtab();
            if (symtab->getNestingLevel() > 1)
            {
                variableId->setSlotNumber(symtab->nextSlotNumber());
            }

            idCtx->entry = variableId;
        }
        else
        {
            error.flag(REDECLARED_IDENTIFIER, ctx);
        }

        variableId->appendLineNumber(lineNumber);
    }

    return nullptr;
}

Object Semantics::visitRoutineDefinition(
                                    goParser::RoutineDefinitionContext *ctx)
{
    goParser::FunctionHeadContext  *funcCtx = ctx->functionHead();
    //goParser::ProcedureHeadContext *procCtx = ctx->procedureHead();
    goParser::RoutineIdentifierContext *idCtx = nullptr;
    goParser::ParametersContext *parameters = nullptr;
    bool functionDefinition = funcCtx != nullptr;
    Typespec *returnType = nullptr;
    string routineName;

    if (functionDefinition)
    {
        idCtx = funcCtx->routineIdentifier();
        parameters = funcCtx->parameters();
    }

    routineName = toLowerCase(idCtx->IDENTIFIER()->getText());
    SymtabEntry *routineId = symtabStack->lookupLocal(routineName);

    if (routineId != nullptr)
    {
        error.flag(REDECLARED_IDENTIFIER,
                   ctx->getStart()->getLine(), routineName);
        return nullptr;
    }

    routineId = symtabStack->enterLocal(
                    routineName, functionDefinition ? FUNCTION : PROCEDURE);
    routineId->setRoutineCode(DECLARED);
    idCtx->entry = routineId;

    // Append to the parent routine's list of subroutines.
    SymtabEntry *parentId = symtabStack->getLocalSymtab()->getOwner();
    parentId->appendSubroutine(routineId);

    routineId->setRoutineSymtab(symtabStack->push());
    idCtx->entry = routineId;

    Symtab *symtab = symtabStack->getLocalSymtab();
    symtab->setOwner(routineId);

    if (parameters != nullptr)
    {
        vector<SymtabEntry *> *parameterIds =
                                visit(parameters->parameterDeclarationsList())
                                                .as<vector<SymtabEntry *>*>();
        routineId->setRoutineParameters(parameterIds);

        for (SymtabEntry *parmId : *parameterIds)
        {
            parmId->setSlotNumber(symtab->nextSlotNumber());
        }
    }

    if (functionDefinition)
    {
        goParser::TypeIdentifierContext *typeIdCtx =
                                                funcCtx->typeIdentifier();
        visit(typeIdCtx);
        returnType = typeIdCtx->type;

        if (returnType->getForm() != SCALAR)
        {
            error.flag(INVALID_RETURN_TYPE, typeIdCtx);
            returnType = Predefined::integerType;
        }

        routineId->setType(returnType);
        idCtx->type = returnType;
    }
    else
    {
        idCtx->type = nullptr;
    }

    visit(ctx->block()->declarations());

    // Enter the function's associated variable into its symbol table.
    if (functionDefinition)
    {
        SymtabEntry *assocVarId =
                            symtabStack->enterLocal(routineName, VARIABLE);
        assocVarId->setSlotNumber(symtab->nextSlotNumber());
        assocVarId->setType(returnType);
    }

    visit(ctx->block()->compoundStatement());
    routineId->setExecutable(ctx->block()->compoundStatement());

    symtabStack->pop();
    return nullptr;
}

Object Semantics::visitParameterDeclarationsList(
                            goParser::ParameterDeclarationsListContext *ctx)
{
    vector<SymtabEntry *> *parameterList = new vector<SymtabEntry *>();

    // Loop over the parameter declarations.
    for (goParser::ParameterDeclarationsContext *dclCtx :
                                                ctx->parameterDeclarations())
    {
        vector<SymtabEntry *> parameterSublist =
                                    visit(dclCtx).as<vector<SymtabEntry *>>();
        for (SymtabEntry *id : parameterSublist) parameterList->push_back(id);
    }

    return parameterList;
}

Object Semantics::visitParameterDeclarations(
                                goParser::ParameterDeclarationsContext *ctx)
{
    Kind kind = ctx->VAR() != nullptr ? REFERENCE_PARAMETER : VALUE_PARAMETER;
    goParser::TypeIdentifierContext *typeCtx = ctx->typeIdentifier();

    visit(typeCtx);
    Typespec *parmType = typeCtx->type;

    vector<SymtabEntry *> parameterSublist;

    // Loop over the parameter identifiers.
    goParser::ParameterIdentifierListContext *listCtx =
                                                ctx->parameterIdentifierList();
    for (goParser::ParameterIdentifierContext *idCtx :
                                                listCtx->parameterIdentifier())
    {
        int lineNumber = idCtx->getStart()->getLine();
        string parmName = toLowerCase(idCtx->IDENTIFIER()->getText());
        SymtabEntry *parmId = symtabStack->lookupLocal(parmName);

        if (parmId == nullptr)
        {
            parmId = symtabStack->enterLocal(parmName, kind);
            parmId->setType(parmType);
        }
        else
        {
            error.flag(REDECLARED_IDENTIFIER, idCtx);
        }

        idCtx->entry = parmId;
        idCtx->type  = parmType;

        parameterSublist.push_back(parmId);
        parmId->appendLineNumber(lineNumber);
    }

    return parameterSublist;
}

Object Semantics::visitAssignmentStatement(
                                goParser::AssignmentStatementContext *ctx)
{
    goParser::LhsContext *lhsCtx = ctx->lhs();
    goParser::RhsContext *rhsCtx = ctx->rhs();

    visitChildren(ctx);

    Typespec *lhsType = lhsCtx->type;
    Typespec *rhsType = rhsCtx->expression()->type;

    if (!TypeChecker::areAssignmentCompatible(lhsType, rhsType))
    {
        error.flag(INCOMPATIBLE_ASSIGNMENT, ctx);
    }

    return nullptr;
}

Object Semantics::visitLhs(goParser::LhsContext *ctx)
{
    goParser::VariableContext *varCtx = ctx->variable();
    visit(varCtx);
    ctx->type = varCtx->type;

    return nullptr;
}

Object Semantics::visitIfStatement(goParser::IfStatementContext *ctx)
{
    goParser::ExpressionContext     *exprCtx  = ctx->expression();
    goParser::TrueStatementContext  *trueCtx  = ctx->trueStatement();
    goParser::FalseStatementContext *falseCtx = ctx->falseStatement();

    visit(exprCtx);
    Typespec *expr_type = exprCtx->type;
    
    if (!TypeChecker::isBoolean(expr_type))
    {
        error.flag(TYPE_MUST_BE_BOOLEAN, exprCtx);
    }
    
    visit(trueCtx);
    if (falseCtx != nullptr) visit(falseCtx);

    return nullptr;
}

Object Semantics::visitCaseStatement(goParser::CaseStatementContext *ctx)
{
    goParser::ExpressionContext *exprCtx = ctx->expression();
    visit(exprCtx);
    Typespec *exprType = exprCtx->type;
    Form exprTypeForm = exprType->getForm();

    if (   (   (exprTypeForm != SCALAR)
            && (exprTypeForm != ENUMERATION)
            && (exprTypeForm != SUBRANGE))
        || (exprType == Predefined::realType)
        || (exprType == Predefined::stringType))
    {
        error.flag(TYPE_MISMATCH, exprCtx);
        exprType = Predefined::integerType;
    }

    set<int> constants;
    goParser::CaseBranchListContext *branchListCtx = ctx->caseBranchList();

    // Loop over the CASE branches.
    for (goParser::CaseBranchContext *branchCtx :
                                                branchListCtx->caseBranch())
    {
        goParser::CaseConstantContext *caseConstCtx = branchCtx->caseConstant();
        goParser::StatementContext *stmtCtx = branchCtx->statement();

        // Loop over the CASE constants in each branch.

		goParser::ConstantContext *constCtx =
											caseConstCtx->constant();
		Object constValue = visit(constCtx);

		caseConstCtx->type  = constCtx->type;
		caseConstCtx->value = 0;

		if (constCtx->type != exprType)
		{
			error.flag(TYPE_MISMATCH, constCtx);
		}
		else if (   (constCtx->type == Predefined::integerType)
				 || (constCtx->type->getForm() == ENUMERATION))
		{
			caseConstCtx->value = constValue.as<int>();
		}
		else if (constCtx->type == Predefined::charType)
		{
			caseConstCtx->value = constValue.as<char>();
		}

		if (constants.find(caseConstCtx->value) != constants.end())
		{
			error.flag(DUPLICATE_CASE_CONSTANT, constCtx);
		}
		else
		{
			constants.insert(caseConstCtx->value);
		}


        if (stmtCtx != nullptr) visit(stmtCtx);
    }

    return nullptr;
}

/*Object Semantics::visitRepeatStatement(
                                    goParser::RepeatStatementContext *ctx)
{
    goParser::ExpressionContext *exprCtx = ctx->expression();
    visit(exprCtx);
    Typespec *exprType = exprCtx->type;

    if (!TypeChecker::isBoolean(exprType))
    {
        error.flag(TYPE_MUST_BE_BOOLEAN, exprCtx);
    }

    visit(ctx->statementList());
    return nullptr;
}*/

Object Semantics::visitWhileStatement(goParser::WhileStatementContext *ctx)
{
    goParser::ExpressionContext *exprCtx = ctx->expression();
    visit(exprCtx);
    Typespec *exprType = exprCtx->type;

    if (!TypeChecker::isBoolean(exprType))
    {
        error.flag(TYPE_MUST_BE_BOOLEAN, exprCtx);
    }

    visit(ctx->statement());
    return nullptr;
}

Object Semantics::visitForStatement(goParser::ForStatementContext *ctx)
{
    bool like_while = ctx->whileStatement() == nullptr;
    if (!like_while)
    {
    	visit(ctx->whileStatement());
    	return nullptr;
    }
	goParser::VariableContext *varCtx = ctx->variable();
    visit(varCtx);

    string controlName = toLowerCase(varCtx->variableIdentifier()->getText());
    Typespec *controlType = Predefined::integerType;

    if (varCtx->entry != nullptr)
    {
        controlType = varCtx->type;
        if (   (controlType->getForm() != SCALAR )
            || (controlType == Predefined::realType)
            || (controlType == Predefined::stringType))
        {
            error.flag(INVALID_CONTROL_VARIABLE, varCtx);
        }
    }
    else
    {
        error.flag(UNDECLARED_IDENTIFIER, ctx->getStart()->getLine(),
                   controlName);
    }

    goParser::ExpressionContext *startCtx = ctx->expression()[0];
    goParser::ExpressionContext *endCtx   = ctx->expression()[1];

    visit(startCtx);
    visit(endCtx);

    if (startCtx->type != controlType)  error.flag(TYPE_MISMATCH, startCtx);
    if (startCtx->type != endCtx->type) error.flag(TYPE_MISMATCH, endCtx);

    visit(ctx->statement());
    return nullptr;
}

/*Object Semantics::visitProcedureCallStatement(
                            goParser::ProcedureCallStatementContext *ctx)
{
    goParser::ProcedureNameContext *nameCtx = ctx->procedureName();
    goParser::ArgumentListContext *listCtx = ctx->argumentList();
    string name = toLowerCase(ctx->procedureName()->getText());
    SymtabEntry *procedureId = symtabStack->lookup(name);
    bool badName = false;

    if (procedureId == nullptr)
    {
        error.flag(UNDECLARED_IDENTIFIER, nameCtx);
        badName = true;
    }
    else if (procedureId->getKind() != PROCEDURE)
    {
        error.flag(NAME_MUST_BE_PROCEDURE, nameCtx);
        badName = true;
    }

    // Bad procedure name. Do a simple arguments check and then leave.
    if (badName)
    {
        for (goParser::ArgumentContext *exprCtx : listCtx->argument())
        {
            visit(exprCtx);
        }
    }

    // Good procedure name.
    else
    {
        vector<SymtabEntry *> *parms = procedureId->getRoutineParameters();
        checkCallArguments(listCtx, parms);
    }

    nameCtx->entry = procedureId;
    return nullptr;
}*/

Object Semantics::visitFunctionCallFactor(
                                goParser::FunctionCallFactorContext *ctx)
{
    goParser::FunctionCallContext *callCtx = ctx->functionCall();
    goParser::FunctionNameContext *nameCtx = callCtx->functionName();
    goParser::ArgumentListContext *listCtx = callCtx->argumentList();
    string name = toLowerCase(callCtx->functionName()->getText());
    SymtabEntry *functionId = symtabStack->lookup(name);
    bool badName = false;

    ctx->type = Predefined::integerType;

    if (functionId == nullptr)
    {
        error.flag(UNDECLARED_IDENTIFIER, nameCtx);
        badName = true;
    }
    else if (functionId->getKind() != FUNCTION)
    {
        error.flag(NAME_MUST_BE_FUNCTION, nameCtx);
        badName = true;
    }

    // Bad function name. Do a simple arguments check and then leave.
    if (badName)
    {
        for (goParser::ArgumentContext *exprCtx : listCtx->argument())
        {
            visit(exprCtx);
        }
    }

    // Good function name.
    else
    {
        vector<SymtabEntry *> *parms = functionId->getRoutineParameters();
        checkCallArguments(listCtx, parms);
        ctx->type = functionId->getType();
    }

    nameCtx->entry = functionId;
    nameCtx->type  = ctx->type;

    return nullptr;
}

void Semantics::checkCallArguments(
        goParser::ArgumentListContext *listCtx, vector<SymtabEntry *> *parms)
{
    int parmsCount = parms->size();
    int argsCount = listCtx != nullptr ? listCtx->argument().size() : 0;

    if (parmsCount != argsCount)
    {
        error.flag(ARGUMENT_COUNT_MISMATCH, listCtx);
        return;
    }

    // Check each argument against the corresponding parameter.
    for (int i = 0; i < parmsCount; i++)
    {
        goParser::ArgumentContext *argCtx = listCtx->argument()[i];
        goParser::ExpressionContext *exprCtx = argCtx->expression();
        visit(exprCtx);

        SymtabEntry *parmId = (*parms)[i];
        Typespec *parmType = parmId->getType();
        Typespec *argType  = exprCtx->type;

        // For a VAR parameter, the argument must be a variable
        // with the same datatype.
        if (parmId->getKind() == REFERENCE_PARAMETER)
        {
            if (expressionIsVariable(exprCtx))
            {
                if (parmType != argType)
                {
                    error.flag(TYPE_MISMATCH, exprCtx);
                }
            }
            else
            {
                error.flag(ARGUMENT_MUST_BE_VARIABLE, exprCtx);
            }
        }

        // For a value parameter, the argument type must be
        // assignment compatible with the parameter type.
        else if (!TypeChecker::areAssignmentCompatible(parmType, argType))
        {
            error.flag(TYPE_MISMATCH, exprCtx);
        }
    }
}

bool Semantics::expressionIsVariable(goParser::ExpressionContext *exprCtx)
{
    // Only a single simple expression?
    if (exprCtx->simpleExpression().size() == 1)
    {
        goParser::SimpleExpressionContext *simpleCtx =
                                                exprCtx->simpleExpression()[0];
        // Only a single term?
        if (simpleCtx->term().size() == 1)
        {
            goParser::TermContext *termCtx = simpleCtx->term()[0];

            // Only a single factor?
            if (termCtx->factor().size() == 1)
            {
                return dynamic_cast<goParser::VariableFactorContext *>(
                                            termCtx->factor()[0]) != nullptr;
            }
        }
    }

    return false;
}

Object Semantics::visitExpression(goParser::ExpressionContext *ctx)
{
    goParser::SimpleExpressionContext *simpleCtx1 = ctx->simpleExpression()[0];

    // First simple expression.
    visit(simpleCtx1);

    Typespec *simpleType1 = simpleCtx1->type;
    ctx->type = simpleType1;

    goParser::RelOpContext *relopCtx = ctx->relOp();

    // Second simple expression?
    if (relopCtx != nullptr)
    {
        goParser::SimpleExpressionContext *simpleCtx2 =
                                                    ctx->simpleExpression()[1];
        visit(simpleCtx2);

        Typespec *simpleType2 = simpleCtx2->type;
        if (!TypeChecker::areComparisonCompatible(simpleType1, simpleType2))
        {
            error.flag(INCOMPATIBLE_COMPARISON, ctx);
        }

        ctx->type = Predefined::booleanType;
    }

    return nullptr;
}

Object Semantics::visitSimpleExpression(
                                    goParser::SimpleExpressionContext *ctx)
{
    int count = ctx->term().size();
    goParser::SignContext *signCtx = ctx->sign();
    bool hasSign = signCtx != nullptr;
    goParser::TermContext *termCtx1 = ctx->term()[0];

    if (hasSign)
    {
        string sign = signCtx->getText();
        if ((sign== "+") && (sign == "-"))
        {
            error.flag(INVALID_SIGN, signCtx);
        }
    }

    // First term.
    visit(termCtx1);
    Typespec *termType1 = termCtx1->type;

    // Loop over any subsequent terms.
    for (int i = 1; i < count; i++)
    {
        string op = toLowerCase(ctx->addOp()[i-1]->getText());
        goParser::TermContext *termCtx2 = ctx->term()[i];
        visit(termCtx2);
        Typespec *termType2 = termCtx2->type;

        // Both operands bool ==> bool result. Else type mismatch.
        if (op == "or")
        {
            if (!TypeChecker::isBoolean(termType1))
            {
                error.flag(TYPE_MUST_BE_BOOLEAN, termCtx1);
            }
            if (!TypeChecker::isBoolean(termType2))
            {
                error.flag(TYPE_MUST_BE_BOOLEAN, termCtx2);
            }
            if (hasSign)
            {
                error.flag(INVALID_SIGN, signCtx);
            }

            termType2 = Predefined::booleanType;
        }
        else if (op == "+")
        {
            // Both operands integer ==> integer result
            if (TypeChecker::areBothInteger(termType1, termType2))
            {
                termType2 = Predefined::integerType;
            }

            // Both real operands ==> real result
            // One real and one integer operand ==> real result
            else if (TypeChecker::isAtLeastOneReal(termType1, termType2))
            {
                termType2 = Predefined::realType;
            }

            // Both operands string ==> string result
            else if (TypeChecker::areBothString(termType1, termType2))
            {
                if (hasSign) error.flag(INVALID_SIGN, signCtx);
                termType2 = Predefined::stringType;
            }

            // Type mismatch.
            else
            {
                if (!TypeChecker::isIntegerOrReal(termType1))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, termCtx1);
                    termType2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(termType2))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, termCtx2);
                    termType2 = Predefined::integerType;
                }
            }
        }
        else  // -
        {
            // Both operands integer ==> integer result
            if (TypeChecker::areBothInteger(termType1, termType2))
            {
                termType2 = Predefined::integerType;
            }

            // Both real operands ==> real result
            // One real and one integer operand ==> real result
            else if (TypeChecker::isAtLeastOneReal(termType1, termType2))
            {
                termType2 = Predefined::realType;
            }

            // Type mismatch.
            else
            {
                if (!TypeChecker::isIntegerOrReal(termType1))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, termCtx1);
                    termType2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(termType2))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, termCtx2);
                    termType2 = Predefined::integerType;
                }
            }
        }

        termType1 = termType2;
    }

    ctx->type = termType1;
    return nullptr;
}

Object Semantics::visitTerm(goParser::TermContext *ctx)
{
    int count = ctx->factor().size();
    goParser::FactorContext *factorCtx1 = ctx->factor()[0];

    // First factor.
    visit(factorCtx1);
    Typespec *factorType1 = factorCtx1->type;

    // Loop over any subsequent factors.
    for (int i = 1; i < count; i++)
    {
        string op = toLowerCase(ctx->mulOp()[i-1]->getText());
        goParser::FactorContext *factorCtx2 = ctx->factor()[i];
        visit(factorCtx2);
        Typespec *factorType2 = factorCtx2->type;

        if (op == "*")
        {
            // Both operands integer  ==> integer result
            if (TypeChecker::areBothInteger(factorType1, factorType2))
            {
                factorType2 = Predefined::integerType;
            }

            // Both real operands ==> real result
            // One real and one integer operand ==> real result
            else if (TypeChecker::isAtLeastOneReal(factorType1, factorType2))
            {
                factorType2 = Predefined::realType;
            }

            // Type mismatch.
            else
            {
                if (!TypeChecker::isIntegerOrReal(factorType1))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, factorCtx1);
                    factorType2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(factorType2))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, factorCtx2);
                    factorType2 = Predefined::integerType;
                }
            }
        }
        else if (op == "/")
        {
            // All integer and real operand combinations ==> real result
            if (   TypeChecker::areBothInteger(factorType1, factorType2)
                || TypeChecker::isAtLeastOneReal(factorType1, factorType2))
            {
                factorType2 = Predefined::realType;
            }

            // Type mismatch.
            else
            {
                if (!TypeChecker::isIntegerOrReal(factorType1))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, factorCtx1);
                    factorType2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(factorType2))
                {
                    error.flag(TYPE_MUST_BE_NUMERIC, factorCtx2);
                    factorType2 = Predefined::integerType;
                }
            }
        }
        else if ((op == "div") ||(op == "mod"))
        {
            // Both operands integer ==> integer result. Else type mismatch.
            if (!TypeChecker::isInteger(factorType1))
            {
                error.flag(TYPE_MUST_BE_INTEGER, factorCtx1);
                factorType2 = Predefined::integerType;
            }
            if (!TypeChecker::isInteger(factorType2))
            {
                error.flag(TYPE_MUST_BE_INTEGER, factorCtx2);
                factorType2 = Predefined::integerType;
            }

            ctx->type = Predefined::integerType;
        }
        else if (op == "and")
        {
            // Both operands bool ==> bool result. Else type mismatch.
            if (!TypeChecker::isBoolean(factorType1))
            {
                error.flag(TYPE_MUST_BE_BOOLEAN, factorCtx1);
                factorType2 = Predefined::booleanType;
            }
            if (!TypeChecker::isBoolean(factorType2))
            {
                error.flag(TYPE_MUST_BE_BOOLEAN, factorCtx2);
                factorType2 = Predefined::booleanType;
            }
        }

        factorType1 = factorType2;
    }

    ctx->type = factorType1;
    return nullptr;
}

Object Semantics::visitVariableFactor(goParser::VariableFactorContext *ctx)
{
    goParser::VariableContext *varCtx = ctx->variable();
    visit(varCtx);
    ctx->type = varCtx->type;

    return nullptr;
}

Object Semantics::visitVariable(goParser::VariableContext *ctx)
{
    goParser::VariableIdentifierContext *varIdCtx =
                                                    ctx->variableIdentifier();

    visit(varIdCtx);
    ctx->entry = varIdCtx->entry;
    ctx->type  = variableDatatype(ctx, varIdCtx->type);

    return nullptr;
}

Object Semantics::visitVariableIdentifier(
                                goParser::VariableIdentifierContext *ctx)
{

    string variableName = toLowerCase(ctx->IDENTIFIER()->getText());
    SymtabEntry *variableId = symtabStack->lookup(variableName);

    if (variableId != nullptr)
    {
        int lineNumber = ctx->getStart()->getLine();
        ctx->type = variableId->getType();
        ctx->entry = variableId;
        variableId->appendLineNumber(lineNumber);

        Kind kind = variableId->getKind();
        switch (kind)
        {
            case TYPE:
            case PROGRAM:
            case PROGRAM_PARAMETER:
            case PROCEDURE:
            case UNDEFINED:
                error.flag(INVALID_VARIABLE, ctx);
                break;

            default: break;
        }
    }
    else
    {
        error.flag(UNDECLARED_IDENTIFIER, ctx);
        ctx->type = Predefined::integerType;
    }

    return nullptr;
}

Typespec *Semantics::variableDatatype(goParser::VariableContext *varCtx,
                                      Typespec *varType)
{
    Typespec *type = varType;

    for (goParser::ModifierContext *modCtx : varCtx->modifier())
    {
        // Subscripts.
        if (modCtx->indexList() != nullptr)
        {
            goParser::IndexListContext *indexListCtx = modCtx->indexList();

            // Loop over the subscripts.
            for (goParser::IndexContext *indexCtx : indexListCtx->index())
            {
                if (type->getForm() == ARRAY)
                {
                    Typespec *indexType = type->getArrayIndexType();
                    goParser::ExpressionContext *exprCtx =
                                                        indexCtx->expression();
                    visit(exprCtx);

                    if (indexType->baseType() != exprCtx->type->baseType())
                    {
                        error.flag(TYPE_MISMATCH, exprCtx);
                    }

                    // Datatype of the next dimension.
                    type = type->getArrayElementType();
                }
                else
                {
                    error.flag(TOO_MANY_SUBSCRIPTS, indexCtx);
                }
            }
        }
        else // Record field.
        {
            if (type->getForm() == RECORD)
            {
                Symtab *symtab = type->getRecordSymtab();
                goParser::FieldContext *fieldCtx = modCtx->field();
                string fieldName =
                                toLowerCase(fieldCtx->IDENTIFIER()->getText());
                SymtabEntry *fieldId = symtab->lookup(fieldName);

                if (fieldId != nullptr)
                {
                    type = fieldId->getType();
                    fieldCtx->entry = fieldId;
                    fieldCtx->type = type;
                    fieldId->appendLineNumber(modCtx->getStart()->getLine());
                }
                else
                {
                    error.flag(INVALID_FIELD, modCtx);
                }
            }

            // Not a record variable.
            else
            {
                error.flag(INVALID_FIELD, modCtx);
            }
        }
    }

    return type;
}

Object Semantics::visitNumberFactor(goParser::NumberFactorContext *ctx)
{
    goParser::NumberContext          *numberCtx   = ctx->number();
    goParser::UnsignedNumberContext  *unsignedCtx = numberCtx->unsignedNumber();
    goParser::IntegerConstantContext *integerCtx  = unsignedCtx->integerConstant();

    ctx->type = (integerCtx != nullptr) ? Predefined::integerType
                                        : Predefined::realType;

    return nullptr;
}

Object Semantics::visitCharacterFactor(goParser::CharacterFactorContext *ctx)
{
    ctx->type = Predefined::charType;
    return nullptr;
}

Object Semantics::visitStringFactor(goParser::StringFactorContext *ctx)
{
    ctx->type = Predefined::stringType;
    return nullptr;
}

Object Semantics::visitNotFactor(goParser::NotFactorContext *ctx)
{
    goParser::FactorContext *factorCtx = ctx->factor();
    visit(factorCtx);

    if (factorCtx->type != Predefined::booleanType)
    {
        error.flag(TYPE_MUST_BE_BOOLEAN, factorCtx);
    }

    ctx->type = Predefined::booleanType;
    return nullptr;
}

Object Semantics::visitParenthesizedFactor(
                                goParser::ParenthesizedFactorContext *ctx)
{
    goParser::ExpressionContext *exprCtx = ctx->expression();
    visit(exprCtx);
    ctx->type = exprCtx->type;

    return nullptr;
}

} // namespace frontend
