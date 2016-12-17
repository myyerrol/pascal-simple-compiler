#include <stdio.h>
#include <stdlib.h>
#include "pascal_handle_symbol_table.h"
#include "pascal_handle_quaternion.h"

#if 0
int main(void)
{
    createConstantNode();
    generateConstantNode(TYPE_INTEGER, "10");
    generateConstantNode(TYPE_INTEGER, "20");
    printConstantNode();
    printf("\n");

    createVariableNode();
    generateVariableNode(TYPE_INTEGER, VARIABLE_TEMP, "30", "t1");
    generateVariableNode(TYPE_INTEGER, VARIABLE_TEMP, "-10", "t2");
    generateVariableNode(TYPE_INTEGER, VARIABLE_TEMP, "200", "t3");
    generateVariableNode(TYPE_INTEGER, VARIABLE_TEMP, "0", "t3");
    printVariableNode();
    printf("\n");

    createQuaternionNode();
    generateQuaternionNode(1, 2, -1, OPCODE_ADD);
    generateQuaternionNode(1, 2, -2, OPCODE_SUB);
    generateQuaternionNode(1, 2, -3, OPCODE_MUL);
    generateQuaternionNode(1, 2, -4, OPCODE_DIV);
    printQuaternionNode();

    deleteConstantNode();
    deleteVariableNode();
    deleteQuaternionNode();

    return 0;
}
#endif
