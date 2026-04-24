#include <stdio.h>
#include "ast.h"

FILE *out;

void generateLLVM(ASTNode* node) {
    if (!node) return;

    switch(node->type) {

        case NODE_NUMBER:
            fprintf(out, "%d", node->value);
            break;

        case NODE_IDENTIFIER:
            fprintf(out, "%%%s", node->name);
            break;

        case NODE_BINARY:
            fprintf(out, "(");
            generateLLVM(node->left);
            fprintf(out, " + ");
            generateLLVM(node->right);
            fprintf(out, ")");
            break;

        case NODE_ASSIGN:
            fprintf(out, "%%%s = add i32 0, ", node->name);
            generateLLVM(node->left);
            fprintf(out, "\n");
            break;

        case NODE_PRINT:
            fprintf(out, "; print statement\n");
            break;
    }
}
