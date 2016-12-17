#ifndef PASCAL_HANDLE_SEMANTICS_H
#define PASCAL_HANDLE_SEMANTICS_H

#define STRING_SIZE                                           20
#define STRING_WITH_MINUS_SIZE                                25
#define TRUE                                                  1
#define FALSE                                                 0
#define ERROR                                                -1

#define ALLOCATE_STRUCT_MEMORY(type)                          \
(struct type *)malloc(sizeof(struct type))                    \

#define JUDGE_BOOL_EXPRESSION(expr_l, expr_r, operator, type) \
do {                                                          \
    if (operator->type_opcode == OPCODE_JLT) {                \
        if (type(expr_l->value) < type(expr_r->value)) {      \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
    else if (operator->type_opcode == OPCODE_JGT) {           \
        if (type(expr_l->value) > type(expr_r->value)) {      \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
    else if (operator->type_opcode == OPCODE_JLE) {           \
        if (type(expr_l->value) <= type(expr_r->value)) {     \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
    else if (operator->type_opcode == OPCODE_JGE) {           \
        if (type(expr_l->value) >= type(expr_r->value)) {     \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
    else if (operator->type_opcode == OPCODE_JEQ) {           \
        if (type(expr_l->value) == type(expr_r->value)) {     \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
    else if (operator->type_opcode == OPCODE_JNE) {           \
        if (type(expr_l->value) != type(expr_r->value)) {     \
            g_true_or_false = TRUE;                           \
        }                                                     \
        else {                                                \
            g_true_or_false = FALSE;                          \
        }                                                     \
    }                                                         \
} while (0)

typedef struct Statement {
    int                   chain;
    struct SyntaxTreeNode **ast_node;
} Statement;

typedef struct WhileStatement {
    int                   chain;
    int                   loop_start;
    struct SyntaxTreeNode **ast_node;
} WhileStatement;

typedef struct BoolExpression {
    int                   true_or_false;
    int                   chain_true;
    int                   chain_false;
    struct SyntaxTreeNode **ast_node;
} BoolExpression;

typedef struct Expression {
    int                   type;
    int                   index_symbol;
    int                   index_quaternion;
    char                  *value;
    char                  *name;
    struct SyntaxTreeNode **ast_node;
} Expression;

typedef struct Symbol {
    int                   type;
    int                   index_symbol;
    char                  *value;
    char                  *name;
    struct SyntaxTreeNode **ast_node;
} Symbol;

typedef struct VariableList {
    int                   chain;
    struct SyntaxTreeNode **ast_node;
} VariableList;

typedef struct Variable {
    int                   type;
    int                   chain;
    int                   index_symbol;
    char                  *value;
    char                  *name;
    struct SyntaxTreeNode **ast_node;
} Variable;

typedef struct Constant {
    int                   type;
    int                   index_symbol;
    char                  *value;
    struct SyntaxTreeNode **ast_node;
} Constant;

typedef struct RelationOperator {
    int                   type_ast;
    int                   type_opcode;
    char                  *value;
} RelationOperator;

extern int generateTempVariableName(char **name);
extern struct Expression *performArithmeticOperation(
    struct Expression *expr_l_son_node,
    struct Expression *expr_r_son_node,
    int    type_quaternion,
    int    type_syntaxtree,
    char   *opcode);

#endif // PASCAL_HANDLE_SEMANTICS_H
