#include <stdio.h>
#include "ast.h"

int yyparse();
extern FILE *out;

int main() {
    printf("Generating LLVM IR...\n");

    out = fopen("../output/output.ll", "w");

    fprintf(out, "; Simple LLVM IR\n");
    fprintf(out, "define i32 @main() {\n");

    yyparse();

    fprintf(out, "ret i32 0\n}\n");

    fclose(out);

    printf("LLVM IR generated in output/output.ll\n");

    return 0;
}
