# 🧠 DSL Compiler using Flex, Bison & LLVM

![C](https://img.shields.io/badge/Language-C-blue)
![Flex](https://img.shields.io/badge/Tool-Flex-orange)
![Bison](https://img.shields.io/badge/Tool-Bison-yellow)
![LLVM](https://img.shields.io/badge/Backend-LLVM-green)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

---

## 👩‍💻 Author
**Josephine Sherly**  
**Reg No:** RA2311026050023  

---

## 📌 Project Overview
This project implements a complete end-to-end compiler for a custom Domain-Specific Language (DSL). It demonstrates all major phases of compiler design, from lexical analysis to executable generation using LLVM.

---

## ⚙️ Compiler Pipeline
    DSL Source Code
           ↓
    Lexical Analysis (Flex)
           ↓
    Syntax Analysis (Bison)
           ↓
    Abstract Syntax Tree (AST)
           ↓
    Semantic Analysis
     (Symbol Table)
           ↓
    LLVM IR Generation
           ↓
    llc → Assembly → Executable

---

## 🛠 Technologies Used

| Tool | Purpose |
|------|--------|
| Flex | Tokenization |
| Bison | Parsing |
| C | Implementation |
| LLVM | IR + Code Generation |

---

## 📂 Project Structure
Compiler-Design-DSL_RA2311026050023_JosephineSherly/

│
├── src/ # Compiler source files
├── test/ # Input DSL programs
├── output/ # LLVM IR & executable
├── docs/ # Report PDF
├── README.md

---

## 🚀 How to Run

```bash
cd src

# Compile
bison -d parser.y
flex lexer.l
gcc lex.yy.c parser.tab.c main.c ast.c codegen.c semantic.c -o compiler

# Run DSL
../src/compiler < ../test/input1.dsl

# Generate executable
llc ../output/output.ll -o ../output/output.s
gcc ../output/output.s -o ../output/program

# Run final program
../output/program

📥 Sample Input

   let x = 10
   print x
   print y

📤 Sample Output

   Generating LLVM IR...
   Semantic Error: Variable 'y' not declared
   LLVM IR generated in output/output.ll

✨ Key Features
✔ Lexical Analysis using Flex
✔ Syntax Parsing using Bison
✔ AST Construction
✔ Semantic Analysis (Symbol Table)
✔ LLVM IR Generation
✔ Native Code Execution 

⚠️ Limitations
Print statements are not fully implemented using printf
Can be extended for real output generation

📌 Future Enhancements
Add printf support in LLVM IR
Improve grammar (remove shift/reduce conflict)
Add control structures (if/while)

🏁 Conclusion

This project successfully implements a modular compiler design with LLVM backend integration, demonstrating the complete compilation pipeline from DSL to executable.
