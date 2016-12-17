#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pascal_handle_semantics.h"
#include "pascal_handle_symbol_table.h"
#include "pascal_handle_quaternion.h"
#include "pascal_handle_syntax_tree.h"
#include "pascal_debug_program.h"

int g_temp_count          = 1;
int g_true_or_false       = TRUE;
int g_true_or_false_if    = TRUE;
int g_true_or_false_while = TRUE;

int generateTempVariableName(char **name)
{
    char temp_name[STRING_SIZE] = "temp";
    char temp_count[STRING_SIZE];

    if (sprintf(temp_count, "%d", g_temp_count) != ERROR) {
        strcat(temp_name, temp_count);
        *name = (char *)malloc(strlen(temp_name) + 1);
        strcpy(*name, temp_name);
        return TRUE;
    }
    else {
        *name = NULL;
        return FALSE;
    }
}

struct Expression *performArithmeticOperation(
    struct Expression *expr_l_son_node,
    struct Expression *expr_r_son_node,
    int    type_quaternion,
    int    type_syntaxtree,
    char   *opcode)
{
    int    index_symbol;
    int    type_a, type_b;
    int    result_type;
    int    result_int;
    double result_real;
    char   result[STRING_SIZE];
    char   *value_a, *value_b;
    char   **temp_name = (char **)malloc(sizeof(char));
    struct Expression *expr_parent_node;

    if (g_true_or_false_while && g_true_or_false_if) {
        type_a  = getSymbolNodeType(expr_l_son_node->index_symbol);
        type_b  = getSymbolNodeType(expr_r_son_node->index_symbol);
        value_a = getSymbolNodeValue(expr_l_son_node->index_symbol);
        value_b = getSymbolNodeValue(expr_r_son_node->index_symbol);

        if (type_a == TYPE_INTEGER && type_b == TYPE_INTEGER) {
            if (strcmp(opcode, "+") == 0) {
                result_int = atoi(value_a) + atoi(value_b);
            }
            else if (strcmp(opcode, "-") == 0) {
                result_int = atoi(value_a) - atoi(value_b);
            }
            else if (strcmp(opcode, "*") == 0) {
                result_int = atoi(value_a) * atoi(value_b);
            }
            else if (strcmp(opcode, "/") == 0) {
                result_int = atoi(value_a) / atoi(value_b);
            }
            sprintf(result, "%d", result_int);
            result_type = TYPE_INTEGER;
        }
        else if (type_a == TYPE_REAL && type_b == TYPE_REAL) {
            if (strcmp(opcode, "+") == 0) {
                result_real = atof(value_a) + atof(value_b);
            }
            else if (strcmp(opcode, "-") == 0) {
                result_real = atof(value_a) - atof(value_b);
            }
            else if (strcmp(opcode, "*") == 0) {
                result_real = atof(value_a) * atof(value_b);
            }
            else if (strcmp(opcode, "/") == 0) {
                result_real = atof(value_a) / atof(value_b);
            }
            sprintf(result, "%lf", result_real);
            result_type = TYPE_REAL;
        }
        else {
            printf("\nWarning, type [%s]  mismatch type [%s]!\n", value_a,
                value_b);
            exit(EXIT_FAILURE);
        }

        if (!generateTempVariableName(temp_name)) {
            *temp_name = "temp";
        }

        index_symbol = generateVariableNode(result_type, VARIABLE_TEMP, result,
                                            *temp_name);
        free(*temp_name);
        *temp_name = NULL;
        g_temp_count++;
    }
    else {
        index_symbol = 0;
        result_type  = TYPE_NULL;
    }

    expr_parent_node = ALLOCATE_STRUCT_MEMORY(Expression);
    expr_parent_node->index_symbol = index_symbol;
    expr_parent_node->type = result_type;
    expr_parent_node->index_quaternion = 0;

    expr_parent_node->value = (char *)malloc(strlen(result) + 1);
    strcpy(expr_parent_node->value, result);

    expr_parent_node->index_quaternion = generateQuaternionNode(
        expr_l_son_node->index_symbol,
        expr_r_son_node->index_symbol,
        index_symbol,
        type_quaternion);
    expr_parent_node->ast_node = createSyntaxTreeNodePointer();
    createSyntaxTreeNode(expr_parent_node->ast_node);
    setSyntaxTreeNode(*(expr_parent_node->ast_node), type_syntaxtree, opcode);
    addSyntaxTreeSonNode(*(expr_parent_node->ast_node),
        *(expr_l_son_node->ast_node));
    addSyntaxTreeSonNode(*(expr_parent_node->ast_node),
        *(expr_r_son_node->ast_node));

    return expr_parent_node;
}
