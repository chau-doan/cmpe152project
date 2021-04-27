#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

#include "antlr4-runtime.h"
#include "goLexer.h"
#include "goParser.h"

#include "frontend/Listing.h"
#include "frontend/SyntaxErrorHandler.h"
#include "frontend/Semantics.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "intermediate/util/BackendMode.h"
#include "backend/converter/Converter.h"
#include "backend/interpreter/Executor.h"
#include "backend/compiler/Compiler.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

using namespace frontend;
using namespace intermediate::type;
using namespace intermediate::symtab;
using namespace backend::converter;
using namespace backend::interpreter;
using namespace backend::compiler;

int main(int argc, const char *args[])
{
    if (argc != 3)
    {
        cout << "USAGE: goJava option sourceFileName" << endl;
        cout << "   option: -convert, -execute, or -compile" << endl;
        return -1;
    }

    string option = toLowerCase(args[1]);
    string sourceFileName = args[2];

    BackendMode mode = EXECUTOR;

    if      (option == "-convert") mode = CONVERTER;
    else if (option == "-execute") mode = EXECUTOR;
    else if (option == "-compile") mode = COMPILER;
    else
    {
        cout << "ERROR: Invalid option." << endl;
        cout << "   Valid options: -convert, -execute, or -compile" << endl;
        return -2;
    }

    // Generate a source file listing.
    Listing listing(sourceFileName);

    ifstream ins;
    ins.open(args[2]);

    // Create the input stream.
    ANTLRInputStream input(ins);

    // Custom syntax error handler.
    SyntaxErrorHandler syntaxErrorHandler;

    // Create a lexer which scans the character stream
    // to create a token stream.
    goLexer lexer(&input);
    lexer.removeErrorListeners();
    lexer.addErrorListener(&syntaxErrorHandler);
    CommonTokenStream tokens(&lexer);

    // Create a parser which parses the token stream.
    goParser parser(&tokens);

    // Pass 1: Check syntax and create the parse tree.
    cout << endl << "PASS 1 Syntax: ";
    parser.removeErrorListeners();
    parser.addErrorListener(&syntaxErrorHandler);
    tree::ParseTree *tree = parser.program();

    // Allow any syntax error messages to print.
    this_thread::sleep_for(chrono::milliseconds(100));

    int errorCount = syntaxErrorHandler.getCount();
    if (errorCount > 0)
    {
        printf("\nThere were %d syntax errors.\n", errorCount);
        cout << "Object file not created or modified." << endl;
        return errorCount;
    }
    else
    {
        cout << "There were no syntax errors." << endl;
    }

    // Pass 2: Create symbol tables and set parse tree node datatypes.
    cout << endl << "PASS 2 Semantics:" << endl ;
    Semantics *pass2 = new Semantics(mode);
    pass2->visit(tree);

    int error_count = pass2->getErrorCount();
    if (error_count > 0)
    {
        cout << endl << "There were " << error_count << " semantic errors."
             << " Object file not created or modified." << endl;
        return errorCount;
    }

    // Pass 3: Translation.
    switch (mode)
    {
        case EXECUTOR:
        {
            // Pass 3: Execute the go program.
            cout << endl << "PASS 3 Execution:" << endl << endl;
            SymtabEntry *programId = pass2->getProgramId();
            Executor *pass3 = new Executor(programId);
            pass3->visit(tree);
            break;
        }

        case CONVERTER:
        {
            // Pass 3: Convert from go to Java.
            cout << endl << "PASS 3 Translation:" << endl;
            Converter *pass3 = new Converter();
            pass3->visit(tree);

            cout << endl << "Object file \"" << pass3->getObjectFileName()
                 << "\" created." << endl;
            break;
        }

        case COMPILER:
        {
            // Pass 3: Compile the go program.
            cout << endl << "PASS 3 Compilation: ";
            SymtabEntry *programId = pass2->getProgramId();
            Compiler *pass3 = new Compiler(programId);
            pass3->visit(tree);

            cout << "Object file \"" << pass3->getObjectFileName()
                 << "\" created." << endl;
            break;
        }
    }

    return 0;
}
