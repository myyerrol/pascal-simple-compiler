#include <stdio.h>
#include "pascal_debug_program.h"
#include "pascal_handle_symbol_table.h"
#include "pascal_handle_quaternion.h"
#include "pascal_handle_syntax_tree.h"

void printConstantInformation(void)
{
    printf("\n");
    printConstantNode();
    printf("\n");
}

void printVariableInformation(void)
{
    printf("\n");
    printVariableNode();
    printf("\n");
}

void printQuaternionInformation(void)
{
    printf("\n");
    printQuaternionNode();
    printf("\n");
}

void printAbstractSyntaxTreeInformation(AbstractSyntaxTreeNode *ast_node)
{
    printf("\n");
    printAbstractSyntaxTreeNode(ast_node);
    printf("\n");
}

void printInformation(void)
{
    printConstantInformation();
    printVariableInformation();
    printQuaternionInformation();
}

void printDebugConstantInformation(void)
{
#if DEBUG
    printConstantInformation();
#endif
}

void printDebugVariableInformation(void)
{
#if DEBUG
    printVariableInformation();
#endif
}

void printDebugQuaternionInformation(void)
{
#if DEBUG
    printQuaternionInformation();
#endif
}

void printDebugAbstractSyntaxTreeInformation(AbstractSyntaxTreeNode *ast_node)
{
#if DEBUG
    printAbstractSyntaxTreeInformation(ast_node);
#endif
}

void printDebugInformation(void)
{
#if DEBUG
    printConstantInformation();
    printVariableInformation();
    printQuaternionInformation();
#endif
}
