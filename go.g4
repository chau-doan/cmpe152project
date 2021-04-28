grammar go;

@header {
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;
}

program           : programHeader imp_clause functionHead block ;
programHeader     : PACKAGE ' ' programIdentifier  '\n';
imp_clause : IMPORT ' ' '"' FMT '"' '\n';

programIdentifier   locals [ SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

block         : declarations compoundStatement ;
declarations  : ( constantsPart ';' )? ( typesPart ';' )? 
                ( variablesPart ';' )? ( routinesPart ';')? ;

constantsPart           : CONST constantDefinitionsList ;
constantDefinitionsList : constantDefinition ( ';' constantDefinition )* ;
constantDefinition      : constantIdentifier '=' constant ;

constantIdentifier  locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

constant            locals [ Typespec *type = nullptr, Object value = nullptr ]  
    : sign? ( IDENTIFIER | unsignedNumber )
    | characterConstant
    | stringConstant
    ;

sign : '-' | '+' ;

typesPart           : TYPE typeDefinitionsList ;
typeDefinitionsList : typeDefinition ( ';' typeDefinition )* ;
typeDefinition      : typeIdentifier '=' typeSpecification ;

typeIdentifier      locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

typeSpecification   locals [ Typespec *type = nullptr ]
    : simpleType        # simpleTypespec
    | arrayType         # arrayTypespec 
    | recordType        # recordTypespec
    ;

simpleType          locals [ Typespec *type = nullptr ] 
    : typeIdentifier    # typeIdentifierTypespec 
    | enumerationType   # enumerationTypespec
    | subrangeType      # subrangeTypespec
    ;
           
enumerationType     : '(' enumerationConstant ( ',' enumerationConstant )* ')' ;
enumerationConstant : constantIdentifier ;
subrangeType        : constant '..' constant ;

arrayType
    : ARRAY '[' arrayDimensionList ']' OF typeSpecification ;
arrayDimensionList : simpleType ( ',' simpleType )* ;

recordType          locals [ SymtabEntry *entry = nullptr ]   
    : RECORD recordFields ';'? END ;
recordFields : variableDeclarationsList ;
 
variablesPart            : VAR variableDeclarationsList ;
variableDeclarationsList : variableDeclarations;
variableDeclarations     : variableIdentifierList ':' typeSpecification ;
variableIdentifierList   : variableIdentifier ( ',' variableIdentifier )* ;

variableIdentifier  locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ] 
    : IDENTIFIER ;

routinesPart      : routineDefinition (routineDefinition)* ;
routineDefinition : functionHead '(' parameters ')' TYPE? block ;
functionHead      : FUNC ' ' routineIdentifier parameters? ' ' typeIdentifier? ;

routineIdentifier   locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

parameters                : '(' parameterDeclarationsList? ')' ;
parameterDeclarationsList : parameterDeclarations ( ';' parameterDeclarations )* ;
parameterDeclarations     : VAR? parameterIdentifierList ' ' typeIdentifier ;
parameterIdentifierList   : parameterIdentifier ( ',' parameterIdentifier )* ;

parameterIdentifier   locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

statement : compoundStatement
          | assignmentStatement
          | ifStatement
          | caseStatement
          | forStatement
          | writeStatement
          | writelnStatement
          | procedureCallStatement
          | emptyStatement
          ;

compoundStatement : '{' statementList '}' ;
emptyStatement : ;
     
statementList       : statement ( '\n' statement )* ;
assignmentStatement : lhs ':=' rhs ;

lhs                 locals [ Typespec *type = nullptr ] 
    : variable ;
rhs : expression ;

ifStatement    : IF ' ' expression trueStatement ( ELSE falseStatement )? ;
trueStatement  : statement ;
falseStatement : statement ;

caseStatement
        locals [ map<int, goParser::StatementContext*> *jumpTable = nullptr ]
    : SWITCH expression '{' caseBranchList '}' ;
    
caseBranchList   : caseBranch ( ';' caseBranch )* ( ';' DEFAULT ':' statement);
caseBranch       : CASE caseConstant ':' statement | ;

caseConstant        locals [ Typespec *type = nullptr, int value = 0 ]
    : constant ;

forStatement : FOR ( whileStatement | (variable ':=' expression ';' expression ';' assignmentStatement statement));
whileStatement: expression statement;
procedureCallStatement : procedureName '(' argumentList? ')' ;

procedureName   locals [ SymtabEntry *entry = nullptr ] 
    : IDENTIFIER ;

argumentList : argument ( ',' argument )* ;
argument     : expression ;

writeStatement   : FMT '.' PRINT writeArguments ;
writelnStatement : FMT '.' PRINTLN writeArguments? ;
writeArguments   : '(' writeArgument (',' writeArgument)* ')' ;
writeArgument    : expression (':' fieldWidth)? ;
fieldWidth       : sign? integerConstant (':' decimalPlaces)? ;
decimalPlaces    : integerConstant ;


expression          locals [ Typespec *type = nullptr ] 
    : simpleExpression (relOp simpleExpression)? ;
    
simpleExpression    locals [ Typespec *type = nullptr ] 
    : sign? term (addOp term)* ;
    
term                locals [ Typespec *type = nullptr ]
    : factor (mulOp factor)* ;

factor              locals [ Typespec *type = nullptr ] 
    : variable             # variableFactor
    | number               # numberFactor
    | characterConstant    # characterFactor
    | stringConstant       # stringFactor
    | functionCall         # functionCallFactor
    | NOT factor           # notFactor
    | '(' expression ')'   # parenthesizedFactor
    ;

variable        locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ] 
    : variableIdentifier modifier* ;

modifier  : '[' indexList ']' | '.' field ;
indexList : index ( ',' index )* ;
index     : expression ; 

field           locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]     
    : IDENTIFIER ;

functionCall : functionName '(' argumentList? ')' ;
functionName    locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ] 
    : IDENTIFIER ;
     
number          : sign? unsignedNumber ;
unsignedNumber  : integerConstant | realConstant ;
integerConstant : INT ;
realConstant    : DOUBLE;

characterConstant : CHAR ;
stringConstant    : STRING ;
       
relOp : '=' | '<>' | '<' | '<=' | '>' | '>=' ;
addOp : '+' | '-' | OR ;
mulOp : '*' | '/' | DIV | MOD | AND ;

fragment A : ('a' | 'A') ;
fragment B : ('b' | 'B') ;
fragment C : ('c' | 'C') ;
fragment D : ('d' | 'D') ;
fragment E : ('e' | 'E') ;
fragment F : ('f' | 'F') ;
fragment G : ('g' | 'G') ;
fragment H : ('h' | 'H') ;
fragment I : ('i' | 'I') ;
fragment J : ('j' | 'J') ;
fragment K : ('k' | 'K') ;
fragment L : ('l' | 'L') ;
fragment M : ('m' | 'M') ;
fragment N : ('n' | 'N') ;
fragment O : ('o' | 'O') ;
fragment P : ('p' | 'P') ;
fragment Q : ('q' | 'Q') ;
fragment R : ('r' | 'R') ;
fragment S : ('s' | 'S') ;
fragment T : ('t' | 'T') ;
fragment U : ('u' | 'U') ;
fragment V : ('v' | 'V') ;
fragment W : ('w' | 'W') ;
fragment X : ('x' | 'X') ;
fragment Y : ('y' | 'Y') ;
fragment Z : ('z' | 'Z') ;

PACKAGE   : P A C K A G E ;
CONST     : C O N S T ;
TYPE      : T Y P E ;
ARRAY     : A R R A Y ;
OF        : O F ;
RECORD    : R E C O R D ;
VAR       : V A R ;
BEGIN     : B E G I N ;
END       : E N D ;
DIV       : D I V ;
MOD       : M O D ;
AND       : A N D ;
OR        : O R ;
NOT       : N O T ;
IF        : I F ;
THEN      : T H E N ;
ELSE      : E L S E ;
CASE      : C A S E ;
FOR       : F O R ;
PRINT     : P R I N T ;
PRINTLN   : P R I N T L N ;
FUNC 	  : F U N C ;  
SWITCH    : S W I T C H;		
DEFAULT   : D E F A U L T;
FMT 	  : F M T;	


IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INT    : [0-9]+ ;

DOUBLE       : INT '.' INT
           | INT ('e' | 'E') ('+' | '-')? INT
           | INT '.' INT ('e' | 'E') ('+' | '-')? INT
           ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

QUOTE     : '\'' ;
CHAR : QUOTE CHARACTER_CHAR QUOTE ;
STRING    : QUOTE STRING_CHAR* QUOTE ;

fragment CHARACTER_CHAR : ~('\'')   // any non-quote character
                        ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;

COMMENT : '/*' COMMENT_CHARACTER* '*/' -> skip ;

fragment COMMENT_CHARACTER : ~('}') ;
                     
