#include <stdio.h>
#include <string.h>

#define MAX_VARS 100

char* symbolTable[MAX_VARS];
int varCount = 0;

int isDeclared(char* name) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(symbolTable[i], name) == 0)
            return 1;
    }
    return 0;
}

void declareVariable(char* name) {
    if (!isDeclared(name)) {
        symbolTable[varCount++] = name;
    }
}

void checkVariable(char* name) {
    if (!isDeclared(name)) {
        printf("Semantic Error: Variable '%s' not declared\n", name);
    }
}
