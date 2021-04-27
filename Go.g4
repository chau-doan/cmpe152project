grammar Go;
sourceFile
    : packageClause eos ( importDecl eos )* ( topLevelDecl eos )*
    ;

//PackageClause  = "package" PackageName .
//PackageName    = identifier .
packageClause
    : 'package' IDENTIFIER
    ;

importDecl
    : 'import' ( importSpec | '(' ( importSpec eos )* ')' )
    ;

importSpec
    : ( '.' | IDENTIFIER )? importPath
    ;

importPath
    : STRING_LIT
    ;

//TopLevelDecl  = Declaration | FunctionDecl | MethodDecl .
topLevelDecl
    : declaration
    | functionDecl
    | methodDecl
    ;

//Declaration   = ConstDecl | TypeDecl | VarDecl .
declaration
    : constDecl
    | typeDecl
    | varDecl
    ;


//ConstDecl      = "const" ( ConstSpec | "(" { ConstSpec ";" } ")" ) .
constDecl
    : 'const' ( constSpec | '(' ( constSpec eos )* ')' )
    ;

//ConstSpec      = IdentifierList [ [ Type ] "=" ExpressionList ] .
constSpec
    : identifierList ( type? '=' expressionList )?
    ;

//
//IdentifierList = identifier { "," identifier } .
identifierList
    : IDENTIFIER ( ',' IDENTIFIER )*
    ;

//ExpressionList = Expression { "," Expression } .
expressionList
    : expression ( ',' expression )*
    ;

//TypeDecl     = "type" ( TypeSpec | "(" { TypeSpec ";" } ")" ) .
typeDecl
    : 'type' ( typeSpec | '(' ( typeSpec eos )* ')' )
    ;

//TypeSpec     = identifier Type .
typeSpec
    : IDENTIFIER type
    ;


// Function declarations

//FunctionDecl = "func" FunctionName ( Function | Signature ) .
//FunctionName = identifier .
//Function     = Signature FunctionBody .
//FunctionBody = Block .
functionDecl
    : 'func' IDENTIFIER ( function | signature )
    ;

function
    : signature block
    ;

//MethodDecl   = "func" Receiver MethodName ( Function | Signature ) .
//Receiver     = Parameters .
methodDecl
    : 'func' receiver IDENTIFIER ( function | signature )
    ;

receiver
    : parameters
    ;

//VarDecl     = "var" ( VarSpec | "(" { VarSpec ";" } ")" ) .
//VarSpec     = IdentifierList ( Type [ "=" ExpressionList ] | "=" ExpressionList ) .
varDecl
    : 'var' ( varSpec | '(' ( varSpec eos )* ')' )
    ;

varSpec
    : identifierList ( type ( '=' expressionList )? | '=' expressionList )
    ;


//Block = "{" StatementList "}" .
block
    : '{' statementList '}'
    ;

//StatementList = { Statement ";" } .
statementList
    : ( statement eos )*
    ;

statement
    : declaration
    | labeledStmt
    | simpleStmt
    | goStmt
    | returnStmt
    | breakStmt
    | continueStmt
    | gotoStmt
    | fallthroughStmt
    | block
    | ifStmt
    | switchStmt
    | selectStmt
    | forStmt
    | deferStmt
	;

//SimpleStmt = EmptyStmt | ExpressionStmt | SendStmt | IncDecStmt | Assignment | ShortVarDecl .
simpleStmt
    : sendStmt
    | expressionStmt
    | incDecStmt
    | assignment
    | shortVarDecl
    | emptyStmt
    ;

//ExpressionStmt = Expression .
expressionStmt
    : expression
    ;

//SendStmt = Channel "<-" Expression .
//Channel  = Expression .
sendStmt
    : expression '<-' expression
    ;

//IncDecStmt = Expression ( "++" | "--" ) .
incDecStmt
    : expression ( '++' | '--' )
    ;

//Assignment = ExpressionList assign_op ExpressionList .
assignment
    : expressionList assign_op expressionList
    ;

//assign_op = [ add_op | mul_op ] "=" .
assign_op
    : ('+' | '-' | '|' | '^' | '*' | '/' | '%' | '<<' | '>>' | '&' | '&^')? '='
    ;


//ShortVarDecl = IdentifierList ":=" ExpressionList .
shortVarDecl
    : identifierList ':=' expressionList
    ;

emptyStmt
    : ';'
    ;

//LabeledStmt = Label ":" Statement .
//Label       = identifier .
labeledStmt
    : IDENTIFIER ':' statement
    ;

//ReturnStmt = "return" [ ExpressionList ] .
returnStmt
    : 'return' expressionList?
    ;

//BreakStmt = "break" [ Label ] .
breakStmt
    : 'break' IDENTIFIER?
    ;

//ContinueStmt = "continue" [ Label ] .
continueStmt
    : 'continue' IDENTIFIER?
    ;

//GotoStmt = "goto" Label .
gotoStmt
    : 'goto' IDENTIFIER
    ;

//FallthroughStmt = "fallthrough" .
fallthroughStmt
    : 'fallthrough'
    ;

//DeferStmt = "defer" Expression .
deferStmt
    : 'defer' expression
    ;

//IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
ifStmt
    : 'if' (simpleStmt ';')? expression block ( 'else' ( ifStmt | block ) )?
    ;

//SwitchStmt = ExprSwitchStmt | TypeSwitchStmt .
switchStmt
    : exprSwitchStmt | typeSwitchStmt
    ;

//ExprSwitchStmt = "switch" [ SimpleStmt ";" ] [ Expression ] "{" { ExprCaseClause } "}" .
//ExprCaseClause = ExprSwitchCase ":" StatementList .
//ExprSwitchCase = "case" ExpressionList | "default" .
exprSwitchStmt
    : 'switch' ( simpleStmt ';' )? expression? '{' exprCaseClause* '}'
    ;

exprCaseClause
    : exprSwitchCase ':' statementList
    ;

exprSwitchCase
    : 'case' expressionList | 'default'
    ;

//TypeSwitchStmt  = "switch" [ SimpleStmt ";" ] TypeSwitchGuard "{" { TypeCaseClause } "}" .
//TypeSwitchGuard = [ identifier ":=" ] PrimaryExpr "." "(" "type" ")" .
//TypeCaseClause  = TypeSwitchCase ":" StatementList .
//TypeSwitchCase  = "case" TypeList | "default" .
//TypeList        = Type { "," Type } .
typeSwitchStmt
    : 'switch' ( simpleStmt ';' )? typeSwitchGuard '{' typeCaseClause* '}'
    ;
typeSwitchGuard
    : ( IDENTIFIER ':=' )? primaryExpr '.' '(' 'type' ')'
    ;
typeCaseClause
    : typeSwitchCase ':' statementList
    ;
typeSwitchCase
    : 'case' typeList | 'default'
    ;
typeList
    : type ( ',' type )*
    ;


//SelectStmt = "select" "{" { CommClause } "}" .
//CommClause = CommCase ":" StatementList .
//CommCase   = "case" ( SendStmt | RecvStmt ) | "default" .
//RecvStmt   = [ ExpressionList "=" | IdentifierList ":=" ] RecvExpr .
//RecvExpr   = Expression .
selectStmt
    : 'select' '{' commClause* '}'
    ;
commClause
    : commCase ':' statementList
    ;
commCase
    : 'case' ( sendStmt | recvStmt ) | 'default'
    ;
recvStmt
    : ( expressionList '=' | identifierList ':=' )? expression
    ;

//ForStmt = "for" [ Condition | ForClause | RangeClause ] Block .
//Condition = Expression .
forStmt
    : 'for' ( expression | forClause | rangeClause )? block
    ;

//ForClause = [ InitStmt ] ";" [ Condition ] ";" [ PostStmt ] .
//InitStmt = SimpleStmt .
//PostStmt = SimpleStmt .
forClause
    : simpleStmt? ';' expression? ';' simpleStmt?
    ;


//RangeClause = [ ExpressionList "=" | IdentifierList ":=" ] "range" Expression .
rangeClause
    : (expressionList '=' | identifierList ':=' )? 'range' expression
    ;

//GoStmt = "go" Expression .
goStmt
    : 'go' expression
    ;

//Type      = TypeName | TypeLit | "(" Type ")" .
type
    : typeName
    | typeLit
    | '(' type ')'
    ;

//TypeName  = identifier | QualifiedIdent .
typeName
    : IDENTIFIER
    | qualifiedIdent
    ;

//TypeLit   = ArrayType | StructType | PointerType | FunctionType | InterfaceType |
//	    SliceType | MapType | ChannelType .
typeLit
    : arrayType
    | structType
    | pointerType
    | functionType
    | interfaceType
    | sliceType
    | mapType
    | channelType
    ;


arrayType
    : '[' arrayLength ']' elementType
    ;

arrayLength
    : expression
    ;

elementType
    : type
    ;

//PointerType = "*" BaseType .
//BaseType    = Type .
pointerType
    : '*' type
    ;

//InterfaceType      = "interface" "{" { MethodSpec ";" } "}" .
//MethodSpec         = MethodName Signature | InterfaceTypeName .
//MethodName         = identifier .
//InterfaceTypeName  = TypeName .
interfaceType
    : 'interface' '{' ( methodSpec eos )* '}'
    ;

//SliceType = "[" "]" ElementType .
sliceType
    : '[' ']' elementType
    ;

//MapType     = "map" "[" KeyType "]" ElementType .
//KeyType     = Type .
mapType
    : 'map' '[' type ']' elementType
    ;

//ChannelType = ( "chan" | "chan" "<-" | "<-" "chan" ) ElementType .
channelType
    : ( 'chan' | 'chan' '<-' | '<-' 'chan' ) elementType
    ;

methodSpec
    : {noTerminatorAfterParams(2)}? IDENTIFIER parameters result
    | typeName
    | IDENTIFIER parameters
    ;


//FunctionType   = "func" Signature .
//Signature      = Parameters [ Result ] .
//Result         = Parameters | Type .
//Parameters     = "(" [ ParameterList [ "," ] ] ")" .
//ParameterList  = ParameterDecl { "," ParameterDecl } .
//ParameterDecl  = [ IdentifierList ] [ "..." ] Type .
functionType
    : 'func' signature
    ;

signature
    : {noTerminatorAfterParams(1)}? parameters result
    | parameters
    ;

result
    : parameters
    | type
    ;

parameters
    : '(' ( parameterList ','? )? ')'
    ;

parameterList
    : parameterDecl ( ',' parameterDecl )*
    ;

parameterDecl
    : identifierList? '...'? type
    ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Operands

//Operand     = Literal | OperandName | MethodExpr | "(" Expression ")" .
//Literal     = BasicLit | CompositeLit | FunctionLit .
//BasicLit    = int_lit | float_lit | imaginary_lit | rune_lit | string_lit .
//OperandName = identifier | QualifiedIdent.

operand
    : literal
    | operandName
    | methodExpr
    | '(' expression ')'
    ;

literal
    : basicLit
    | compositeLit
    | functionLit
    ;

basicLit
    : INT_LIT
    | FLOAT_LIT
    | IMAGINARY_LIT
    | RUNE_LIT
    | STRING_LIT
    ;

operandName
    : IDENTIFIER
    | qualifiedIdent
    ;

//QualifiedIdent = PackageName "." identifier .
qualifiedIdent
    : IDENTIFIER '.' IDENTIFIER
    ;

//CompositeLit  = LiteralType LiteralValue .
//LiteralType   = StructType | ArrayType | "[" "..." "]" ElementType |
//                SliceType | MapType | TypeName .
//LiteralValue  = "{" [ ElementList [ "," ] ] "}" .
//ElementList   = KeyedElement { "," KeyedElement } .
//KeyedElement  = [ Key ":" ] Element .
//Key           = FieldName | Expression | LiteralValue .
//FieldName     = identifier .
//Element       = Expression | LiteralValue .

compositeLit
    : literalType literalValue
    ;

literalType
    : structType
    | arrayType
    | '[' '...' ']' elementType
    | sliceType
    | mapType
    | typeName
    ;

literalValue
    : '{' ( elementList ','? )? '}'
    ;

elementList
    : keyedElement (',' keyedElement)*
    ;

keyedElement
    : (key ':')? element
    ;

key
    : IDENTIFIER
    | expression
    | literalValue
    ;

element
    : expression
    | literalValue
    ;

//StructType     = "struct" "{" { FieldDecl ";" } "}" .
//FieldDecl      = (IdentifierList Type | AnonymousField) [ Tag ] .
//AnonymousField = [ "*" ] TypeName .
//Tag            = string_lit .
structType
    : 'struct' '{' ( fieldDecl eos )* '}'
    ;

fieldDecl
    : ({noTerminatorBetween(2)}? identifierList type | anonymousField) STRING_LIT?
    ;

anonymousField
    : '*'? typeName
    ;

//FunctionLit = "func" Function .
functionLit
    : 'func' function
    ;

//PrimaryExpr =
//	Operand |
//	Conversion |
//	PrimaryExpr Selector |
//	PrimaryExpr Index |
//	PrimaryExpr Slice |
//	PrimaryExpr TypeAssertion |
//	PrimaryExpr Arguments .
//
//Selector       = "." identifier .
//Index          = "[" Expression "]" .
//Slice          = "[" ( [ Expression ] ":" [ Expression ] ) |
//                     ( [ Expression ] ":" Expression ":" Expression )
//                 "]" .
//TypeAssertion  = "." "(" Type ")" .
//Arguments      = "(" [ ( ExpressionList | Type [ "," ExpressionList ] ) [ "..." ] [ "," ] ] ")" .

primaryExpr
    : operand
    | conversion
    | primaryExpr selector
    | primaryExpr index
    | primaryExpr slice
    | primaryExpr typeAssertion
	| primaryExpr arguments
    ;

selector
    : '.' IDENTIFIER
    ;

index
    : '[' expression ']'
    ;

slice
    : '[' (( expression? ':' expression? ) | ( expression? ':' expression ':' expression )) ']'
    ;

typeAssertion
    : '.' '(' type ')'
    ;

arguments
    : '(' ( ( expressionList | type ( ',' expressionList )? ) '...'? ','? )? ')'
    ;

//MethodExpr    = ReceiverType "." MethodName .
//ReceiverType  = TypeName | "(" "*" TypeName ")" | "(" ReceiverType ")" .
methodExpr
    : receiverType '.' IDENTIFIER
    ;

receiverType
    : typeName
    | '(' '*' typeName ')'
    | '(' receiverType ')'
    ;

//Expression = UnaryExpr | Expression binary_op Expression .
//UnaryExpr  = PrimaryExpr | unary_op UnaryExpr .

expression
    : unaryExpr
//    | expression BINARY_OP expression
    | expression ('||' | '&&' | '==' | '!=' | '<' | '<=' | '>' | '>=' | '+' | '-' | '|' | '^' | '*' | '/' | '%' | '<<' | '>>' | '&' | '&^') expression
    ;

unaryExpr
    : primaryExpr
    | ('+'|'-'|'!'|'^'|'*'|'&'|'<-') unaryExpr
    ;

//Conversion = Type "(" Expression [ "," ] ")" .
conversion
    : type '(' expression ','? ')'
    ;

eos
    : ';'
    | EOF
    | {lineTerminatorAhead()}?
    | {_input.LT(1).getText().equals("}") }?
    ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LEXER


// Identifiers
//identifier = letter { letter | unicode_digit } .
IDENTIFIER
    : LETTER ( LETTER | UNICODE_DIGIT )*
    ;

// Keywords
KEYWORD
    : 'break'
    | 'default'
    | 'func'
    | 'interface'
    | 'select'
    | 'case'
    | 'defer'
    | 'go'
    | 'map'
    | 'struct'
    | 'chan'
    | 'else'
    | 'goto'
    | 'package'
    | 'switch'
    | 'const'
    | 'fallthrough'
    | 'if'
    | 'range'
    | 'type'
    | 'continue'
    | 'for'
    | 'import'
    | 'return'
    | 'var'
    ;


// Operators

//binary_op  = "||" | "&&" | rel_op | add_op | mul_op .
BINARY_OP
    : '||' | '&&' | REL_OP | ADD_OP | MUL_OP
    ;

//rel_op     = "==" | "!=" | "<" | "<=" | ">" | ">=" .
fragment REL_OP
    : '=='
    | '!='
    | '<'
    | '<='
    | '>'
    | '>='
    ;

//add_op     = "+" | "-" | "|" | "^" .
fragment ADD_OP
    : '+'
    | '-'
    | '|'
    | '^'
    ;

//mul_op     = "*" | "/" | "%" | "<<" | ">>" | "&" | "&^" .
fragment MUL_OP
    : '*'
    | '/'
    | '%'
    | '<<'
    | '>>'
    | '&'
    | '&^'
    ;

//unary_op   = "+" | "-" | "!" | "^" | "*" | "&" | "<-" .
fragment UNARY_OP
    : '+'
    | '-'
    | '!'
    | '^'
    | '*'
    | '&'
    | '<-'
    ;


// Integer literals

//int_lit     = decimal_lit | octal_lit | hex_lit .
INT_LIT
    : DECIMAL_LIT
    | OCTAL_LIT
    | HEX_LIT
    ;

//decimal_lit = ( "1" … "9" ) { decimal_digit } .
fragment DECIMAL_LIT
    : [1-9] DECIMAL_DIGIT*
    ;

//octal_lit   = "0" { octal_digit } .
fragment OCTAL_LIT
    : '0' OCTAL_DIGIT*
    ;

//hex_lit     = "0" ( "x" | "X" ) hex_digit { hex_digit } .
fragment HEX_LIT
    : '0' ( 'x' | 'X' ) HEX_DIGIT+
    ;


// Floating-point literals

//float_lit = decimals "." [ decimals ] [ exponent ] |
//            decimals exponent |
//            "." decimals [ exponent ] .
FLOAT_LIT
    : DECIMALS '.' DECIMALS? EXPONENT?
    | DECIMALS EXPONENT
    | '.' DECIMALS EXPONENT?
    ;

//decimals  = decimal_digit { decimal_digit } .
fragment DECIMALS
    : DECIMAL_DIGIT+
    ;

//exponent  = ( "e" | "E" ) [ "+" | "-" ] decimals .
fragment EXPONENT
    : ( 'e' | 'E' ) ( '+' | '-' )? DECIMALS
    ;

// Imaginary literals
//imaginary_lit = (decimals | float_lit) "i" .
IMAGINARY_LIT
    : (DECIMALS | FLOAT_LIT) 'i'
    ;


// Rune literals

//rune_lit         = "'" ( unicode_value | byte_value ) "'" .
RUNE_LIT
    : '\'' ( UNICODE_VALUE | BYTE_VALUE ) '\''
    ;

//unicode_value    = unicode_char | little_u_value | big_u_value | escaped_char .
fragment UNICODE_VALUE
    : LITTLE_U_VALUE
    | BIG_U_VALUE
    | ESCAPED_CHAR
    | UNICODE_CHAR
    ;

//byte_value       = octal_byte_value | hex_byte_value .
fragment BYTE_VALUE
    : OCTAL_BYTE_VALUE | HEX_BYTE_VALUE
    ;

//octal_byte_value = `\` octal_digit octal_digit octal_digit .
fragment OCTAL_BYTE_VALUE
    : '\\' OCTAL_DIGIT OCTAL_DIGIT OCTAL_DIGIT
    ;

//hex_byte_value   = `\` "x" hex_digit hex_digit .
fragment HEX_BYTE_VALUE
    : '\\' 'x' HEX_DIGIT HEX_DIGIT
    ;

//little_u_value   = `\` "u" hex_digit hex_digit hex_digit hex_digit .
//                           hex_digit hex_digit hex_digit hex_digit .
LITTLE_U_VALUE
    : '\\u' HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT
    ;

//big_u_value      = `\` "U" hex_digit hex_digit hex_digit hex_digit
BIG_U_VALUE
    : '\\U' HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT
    ;

//escaped_char     = `\` ( "a" | "b" | "f" | "n" | "r" | "t" | "v" | `\` | "'" | `"` ) .
fragment ESCAPED_CHAR
    : '\\' ( 'a' | 'b' | 'f' | 'n' | 'r' | 't' | 'v' | '\\' | '\'' | '"' )
    ;


// String literals

//string_lit             = raw_string_lit | interpreted_string_lit .
STRING_LIT
    : RAW_STRING_LIT
    | INTERPRETED_STRING_LIT
    ;

//raw_string_lit         = "`" { unicode_char | newline } "`" .
fragment RAW_STRING_LIT
    : '`' ( UNICODE_CHAR | NEWLINE | [~`] )*? '`'
    ;

//interpreted_string_lit = `"` { unicode_value | byte_value } `"` .
fragment INTERPRETED_STRING_LIT
    : '"' ( '\\"' | UNICODE_VALUE | BYTE_VALUE )*? '"'
    ;


//
// Source code representation
//

//letter        = unicode_letter | "_" .
fragment LETTER
    : UNICODE_LETTER
    | '_'
    ;

//decimal_digit = "0" … "9" .
fragment DECIMAL_DIGIT
    : [0-9]
    ;

//octal_digit   = "0" … "7" .
fragment OCTAL_DIGIT
    : [0-7]
    ;

//hex_digit     = "0" … "9" | "A" … "F" | "a" … "f" .
fragment HEX_DIGIT
    : [0-9a-fA-F]
    ;

//newline = /* the Unicode code point U+000A */ .
fragment NEWLINE
    : [\u000A]
    ;

//unicode_char = /* an arbitrary Unicode code point except newline */ .
fragment UNICODE_CHAR   : ~[\u000A] ;



//
// Whitespace and comments
//

WS  :  [ \t]+ -> channel(HIDDEN)
    ;

COMMENT
    :   '/*' .*? '*/' -> channel(HIDDEN)
    ;

TERMINATOR
	: [\r\n]+ -> channel(HIDDEN)
	;


LINE_COMMENT
    :   '//' ~[\r\n]* -> skip
    ;
