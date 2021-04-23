#include "intermediate/symtab/Predefined.h"
#include "Compiler.h"

namespace backend { namespace compiler {

Object Compiler::visitProgram(goParser::ProgramContext *ctx)
{
    createNewGenerators(code);
    programCode->emitProgram(ctx);
    return nullptr;
}

Object Compiler::visitRoutineDefinition(
                                goParser::RoutineDefinitionContext *ctx)
{
    createNewGenerators(programCode);
    programCode->emitRoutine(ctx);
    return nullptr;
}

Object Compiler::visitStatement(goParser::StatementContext *ctx)
{
    if (   (ctx->compoundStatement() == nullptr)
        && (ctx->emptyStatement() == nullptr))
    {
        statementCode->emitComment(ctx);
    }

    return visitChildren(ctx);
}

Object Compiler::visitAssignmentStatement(
                                goParser::AssignmentStatementContext *ctx)
{
    statementCode->emitAssignment(ctx);
    return nullptr;
}

Object Compiler::visitIfStatement(goParser::IfStatementContext *ctx)
{
    statementCode->emitIf(ctx);
    return nullptr;
}

Object Compiler::visitCaseStatement(goParser::CaseStatementContext *ctx)
{
    statementCode->emitCase(ctx);
    return nullptr;
}

Object Compiler::visitRepeatStatement(goParser::RepeatStatementContext *ctx)
{
    statementCode->emitRepeat(ctx);
    return nullptr;
}

Object Compiler::visitWhileStatement(goParser::WhileStatementContext *ctx)
{
    statementCode->emitWhile(ctx);
    return nullptr;
}

Object Compiler::visitForStatement(goParser::ForStatementContext *ctx)
{
    statementCode->emitFor(ctx);
    return nullptr;
}

Object Compiler::visitProcedureCallStatement(
                            goParser::ProcedureCallStatementContext *ctx)
{
    statementCode->emitProcedureCall(ctx);
    return nullptr;
}

Object Compiler::visitExpression(goParser::ExpressionContext *ctx)
{
    expressionCode->emitExpression(ctx);
    return nullptr;
}

Object Compiler::visitVariableFactor(goParser::VariableFactorContext *ctx)
{
    expressionCode->emitLoadValue(ctx->variable());
    return nullptr;
}

Object Compiler::visitVariable(goParser::VariableContext *ctx)
{
    expressionCode->emitLoadVariable(ctx);
    return nullptr;
}

Object Compiler::visitNumberFactor(goParser::NumberFactorContext *ctx)
{
    if (ctx->type == Predefined::integerType)
    {
        expressionCode->emitLoadIntegerConstant(ctx->number());
    }
    else
    {
        expressionCode->emitLoadRealConstant(ctx->number());
    }

    return nullptr;
}

Object Compiler::visitCharacterFactor(goParser::CharacterFactorContext *ctx)
{
    char ch = ctx->getText()[1];
    expressionCode->emitLoadConstant(ch);

    return nullptr;
}

Object Compiler::visitStringFactor(goParser::StringFactorContext *ctx)
{
    string jasminString = convertString(ctx->getText(), true);
    expressionCode->emitLoadConstant(jasminString);

    return nullptr;
}

Object Compiler::visitFunctionCallFactor(
                                goParser::FunctionCallFactorContext *ctx)
{
    statementCode->emitFunctionCall(ctx->functionCall());
    return nullptr;
}

Object Compiler::visitNotFactor(goParser::NotFactorContext *ctx)
{
    expressionCode->emitNotFactor(ctx);
    return nullptr;
}

Object Compiler::visitParenthesizedFactor(
                                goParser::ParenthesizedFactorContext *ctx)
{
    return visit(ctx->expression());
}

Object Compiler::visitWriteStatement(goParser::WriteStatementContext *ctx)
{
    statementCode->emitWrite(ctx);
    return nullptr;
}

Object Compiler::visitWritelnStatement(goParser::WritelnStatementContext *ctx)
{
    statementCode->emitWriteln(ctx);
    return nullptr;
}

Object Compiler::visitReadStatement(goParser::ReadStatementContext *ctx)
{
    statementCode->emitRead(ctx);
    return nullptr;
}

Object Compiler::visitReadlnStatement(goParser::ReadlnStatementContext *ctx)
{
    statementCode->emitReadln(ctx);
    return nullptr;
}

}}  // namespace backend::compiler
