#ifndef PASCAL_DEBUG_PROGRAM_H
#define PASCAL_DEBUG_PROGRAM_H

#include "pascal_handle_syntax_tree.h"

#define DEBUG 0

extern void printConstantInformation(void);
extern void printVariableInformation(void);
extern void printQuaternionInformation(void);
extern void printAbstractSyntaxTreeInformation(
    AbstractSyntaxTreeNode *ast_node);
extern void printInformation(void);
extern void printDebugConstantInformation(void);
extern void printDebugVariableInformation(void);
extern void printDebugQuaternionInformation(void);
extern void printDebugInformation(void);
extern void printDebugAbstractSyntaxTreeInformation(
    AbstractSyntaxTreeNode *ast_node);

#endif // PASCAL_DEBUG_PROGRAM_H
