# DSL Compiler Implementation (Flex, Bison & LLVM)

## Student Details
**Name:** Dhivahar  
**Register Number:** RA2311026050157  

---

## Project Summary
This project demonstrates the design and implementation of a simple compiler for a custom Domain-Specific Language (DSL). The compiler processes input programs and converts them into executable form using LLVM.

---

## Compilation Workflow

The compiler follows a structured pipeline:

1. **Lexical Analysis**  
   - Tokenizes input using Flex  

2. **Syntax Analysis**  
   - Validates grammar using Bison  

3. **AST Generation**  
   - Builds structured representation of the program  

4. **Semantic Checking**  
   - Ensures variables are declared before use  

5. **Code Generation**  
   - Produces LLVM Intermediate Representation  

6. **Execution**  
   - LLVM IR → Assembly → Executable  

---

## Technologies Used

- Flex → Tokenization  
- Bison → Parsing  
- C → Core implementation  
- LLVM → Intermediate code and execution  

---

## Project Layout

src/ → Compiler source files
test/ → DSL input programs
output/ → Generated IR and executable
docs/ → Project documentation
README.md → Project details


---

## Execution Instructions

```bash
cd src

# Build compiler
bison -d parser.y
flex lexer.l
gcc lex.yy.c parser.tab.c main.c ast.c codegen.c semantic.c -o compiler

# Run DSL input
../src/compiler < ../test/input1.dsl

# Generate executable
llc ../output/output.ll -o ../output/output.s
gcc ../output/output.s -o ../output/program

# Run output program
../output/program

Example Input
let x = 10
print x
print y

Example Output
Generating LLVM IR...
Semantic Error: Variable 'y' not declared
LLVM IR generated in output/output.ll

Key Highlights

*Implementation of full compiler pipeline
*Symbol table for semantic validation
*LLVM integration for code generation
*Modular design using separate components

Limitations
*Print functionality is not fully implemented in LLVM
*Grammar can be extended for complex constructs

Future Improvements
*Add support for conditional statements
*Implement full print functionality using LLVM
*Improve grammar to eliminate parsing conflicts

Conclusion

The project successfully demonstrates the essential stages of compiler design and provides a working model for DSL compilation using modern tools like LLVM.
