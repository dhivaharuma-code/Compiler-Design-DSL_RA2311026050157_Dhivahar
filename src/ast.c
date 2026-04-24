#include <stdlib.h>
#include <string.h>
#include "ast.h"

ASTNode* createNumberNode(int value) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = NODE_NUMBER;
    node->value = value;
    return node;
}

ASTNode* createIdentifierNode(char* name) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = NODE_IDENTIFIER;
    node->name = strdup(name);
    return node;
}

ASTNode* createBinaryNode(ASTNode* left, ASTNode* right) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = NODE_BINARY;
    node->left = left;
    node->right = right;
    return node;
}

ASTNode* createAssignNode(char* name, ASTNode* expr) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = NODE_ASSIGN;
    node->name = strdup(name);
    node->left = expr;
    return node;
}

ASTNode* createPrintNode(ASTNode* expr) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = NODE_PRINT;
    node->left = expr;
    return node;
}
