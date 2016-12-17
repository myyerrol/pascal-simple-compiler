#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pascal_handle_symbol_table.h"

int g_constant_index = 1;
int g_variable_index = -1;
ConstantTableNode *g_constant_head_node, *g_constant_tail_node;
VariableTableNode *g_variable_head_node, *g_variable_tail_node;

void createConstantNode(void)
{
    g_constant_head_node =
        (ConstantTableNode *)malloc(sizeof(ConstantTableNode));
    g_constant_head_node->constant =
        (ConstantTable *)malloc(sizeof(ConstantTable));

    g_constant_tail_node = g_constant_head_node;

    g_constant_head_node->constant->type  = 0;
    g_constant_head_node->constant->value = NULL;
    g_constant_head_node->index           = 0;
    g_constant_head_node->next            = NULL;
}

void createVariableNode()
{
    g_variable_head_node =
        (VariableTableNode *)malloc(sizeof(VariableTableNode));
    g_variable_head_node->variable =
        (VariableTable *)malloc(sizeof(VariableTable));

    g_variable_tail_node = g_variable_head_node;

    g_variable_head_node->variable->type  = 0;
    g_variable_head_node->variable->flag  = 0;
    g_variable_head_node->variable->value = NULL;
    g_variable_head_node->variable->name  = NULL;
    g_variable_head_node->index           = 0;
    g_variable_head_node->chain           = 0;
    g_variable_head_node->define          = FALSE;
    g_variable_head_node->next            = NULL;
}

void deleteConstantNode()
{
    ConstantTableNode *constant_temp_node_a, *constant_temp_node_b;
    constant_temp_node_a = g_constant_head_node;

    while (constant_temp_node_a != NULL) {
        constant_temp_node_b = constant_temp_node_a->next;
        free(constant_temp_node_a);
        constant_temp_node_a = constant_temp_node_b;
    }

    g_constant_head_node = NULL;
}

void deleteVariableNode()
{
    VariableTableNode *variable_temp_node_a, *variable_temp_node_b;
    variable_temp_node_a = g_variable_head_node;

    while (variable_temp_node_a != NULL) {
        variable_temp_node_b = variable_temp_node_a->next;
        free(variable_temp_node_a);
        variable_temp_node_a = variable_temp_node_b;
    }

    g_variable_head_node = NULL;
}

void printConstantNode()
{
    char *constant_type;
    ConstantTableNode *constant_temp_node;
    constant_temp_node = g_constant_head_node;

    printf("==============================================================\n");
    printf("                    Constant Symbol Table                     \n");
    printf("==============================================================\n");
    printf("[index]           [element's type]           [element's value]\n");

    while ((constant_temp_node = constant_temp_node->next) != NULL) {
        if (constant_temp_node->constant->type == TYPE_INTEGER) {
            constant_type = "integer";
        }
        else if (constant_temp_node->constant->type == TYPE_REAL) {
            constant_type = "real";
        }
        else if (constant_temp_node->constant->type == TYPE_CHAR) {
            constant_type = "char";
        }
        else if (constant_temp_node->constant->type == TYPE_STRING) {
            constant_type = "string";
        }
        else if (constant_temp_node->constant->type == TYPE_BOOLEAN) {
            constant_type = "boolean";
        }
        printf("%-7d           %-16s           %-17s\n",
            constant_temp_node->index, constant_type,
            constant_temp_node->constant->value);
    }
}

void printVariableNode()
{
    char *variable_type;
    char *variable_flag;
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    printf("==============================================================\n");
    printf("                    Variable Symbol Table                     \n");
    printf("==============================================================\n");
    printf("[index] [variable name] [variable type] [element type] [value]\n");

    while ((variable_temp_node = variable_temp_node->next) != NULL) {
        if (variable_temp_node->variable->type == TYPE_INTEGER) {
            variable_type = "integer";
        }
        else if (variable_temp_node->variable->type == TYPE_REAL) {
            variable_type = "real";
        }
        else if (variable_temp_node->variable->type == TYPE_CHAR) {
            variable_type = "char";
        }
        else if (variable_temp_node->variable->type == TYPE_STRING) {
            variable_type = "string";
        }
        else if (variable_temp_node->variable->type == TYPE_BOOLEAN) {
            variable_type = "boolean";
        }
        else if (variable_temp_node->variable->type == TYPE_NULL) {
            variable_type = "null";
        }
        if (variable_temp_node->variable->flag == VARIABLE_USER) {
            variable_flag = "user";
        }
        else if (variable_temp_node->variable->flag == VARIABLE_TEMP) {
            variable_flag = "temp";
        }
        printf("%-7d %-15s %-15s %-14s %-7s\n", variable_temp_node->index,
            variable_temp_node->variable->name, variable_flag, variable_type,
            variable_temp_node->variable->value);
    }
}

int modifyConstantNodeValue(int index, char *value)
{
    ConstantTableNode *constant_temp_node;
    constant_temp_node = g_constant_head_node;

    constant_temp_node = getConstantNode(index);

    if (constant_temp_node != NULL) {
        if (constant_temp_node->constant->value != NULL) {
            free(constant_temp_node->constant->value);
        }
        constant_temp_node->constant->value =
            (char *)malloc(strlen(value) + 1);
        strcpy(constant_temp_node->constant->value, value);
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int modifyVariableNodeValue(int index, char *value)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        if (variable_temp_node->variable->value != NULL) {
            free(variable_temp_node->variable->value);
        }
        variable_temp_node->variable->value =
            (char *)malloc(strlen(value) + 1);
        strcpy(variable_temp_node->variable->value, value);
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int modifySymbolNodeValue(int index, char *value)
{
    if (index > 0) {
        return modifyConstantNodeValue(index, value);
    }
    else {
        return modifyVariableNodeValue(index, value);
    }
}

int modifyVariableNode(int index, int type, char *value)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        if (variable_temp_node->variable->value != NULL) {
            free(variable_temp_node->variable->value);
        }
        variable_temp_node->variable->type = type;
        variable_temp_node->variable->value =
            (char *)malloc(strlen(value) + 1);
        strcpy(variable_temp_node->variable->value, value);
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int modifyVariableNodeChain(int index, int chain)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        while (variable_temp_node->chain != variable_temp_node->index) {
            variable_temp_node = getVariableNode(variable_temp_node->chain);
        }
        variable_temp_node->chain = chain;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int modifyVariableNodeDefine(int index)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        variable_temp_node->define = TRUE;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int backpatchVariableNodeChain(int index, int type)
{
    VariableTableNode *variable_temp_node, *variable_flag_node;
    variable_temp_node = getVariableNode(index);
    variable_flag_node = variable_temp_node;

    if (variable_temp_node != NULL) {
        while (variable_temp_node->chain != variable_temp_node->index) {
            variable_temp_node->variable->type = type;
            variable_temp_node = getVariableNode(variable_temp_node->chain);
            variable_flag_node->chain = variable_flag_node->index;
            variable_flag_node = variable_temp_node;
        }
        variable_temp_node->variable->type = type;
        variable_temp_node->chain = variable_temp_node->index;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int generateConstantNode(int type, char *value)
{
    ConstantTableNode *constant_new_node;
    constant_new_node =
        (ConstantTableNode *)malloc(sizeof(ConstantTableNode));
    constant_new_node->constant =
        (ConstantTable *)malloc(sizeof(ConstantTable));

    if (g_constant_head_node == NULL) {
        createConstantNode();
    }

    if (value == NULL) {
        constant_new_node->constant->value = NULL;
    }
    else {
        constant_new_node->constant->value = (char *)malloc(strlen(value) + 1);
        strcpy(constant_new_node->constant->value, value);
    }

    constant_new_node->constant->type  = type;
    constant_new_node->index           = g_constant_index;
    g_constant_tail_node->next         = constant_new_node;
    g_constant_tail_node               = constant_new_node;
    g_constant_tail_node->next         = NULL;

    g_constant_index++;

    return constant_new_node->index;
}

int generateVariableNode(int type, int flag, char *value, char *name)
{
    VariableTableNode *variable_new_node;

    variable_new_node =
        (VariableTableNode *)malloc(sizeof(VariableTableNode));
    variable_new_node->variable =
        (VariableTable *)malloc(sizeof(VariableTable));

    if (g_variable_head_node == NULL) {
        createVariableNode();
    }

    if (value == NULL) {
        variable_new_node->variable->value = NULL;
    }
    else {
        variable_new_node->variable->value = (char *)malloc(strlen(value) + 1);
        strcpy(variable_new_node->variable->value, value);
    }

    variable_new_node->variable->name = (char *)malloc(strlen(name) + 1);
    strcpy(variable_new_node->variable->name, name);
    variable_new_node->variable->type  = type;
    variable_new_node->variable->flag  = flag;
    variable_new_node->index           = g_variable_index;
    variable_new_node->chain           = g_variable_index;
    variable_new_node->define          = FALSE;
    g_variable_tail_node->next         = variable_new_node;
    g_variable_tail_node               = variable_new_node;
    g_variable_tail_node->next         = NULL;

    g_variable_index--;

    return variable_new_node->index;
}

int getConstantNodeType(int index)
{
    ConstantTableNode *constant_temp_node;
    constant_temp_node = g_constant_head_node;

    constant_temp_node = getConstantNode(index);

    if (constant_temp_node != NULL) {
        return constant_temp_node->constant->type;
    }

    return FALSE;
}

int getVariableNodeType(int index)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        return variable_temp_node->variable->type;
    }

    return FALSE;
}

int getSymbolNodeType(int index)
{
    if (index > 0) {
        return getConstantNodeType(index);
    }
    else {
        return getVariableNodeType(index);
    }
}

int getVariableNodeIndex(char *name)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    while ((variable_temp_node = variable_temp_node->next) != NULL) {
        if (strcmp(variable_temp_node->variable->name, name) == 0) {
            return variable_temp_node->index;
        }
    }

    return FALSE;
}

int getVariableNodeDefine(int index)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        return variable_temp_node->define;
    }
    else {
        return ERROR;
    }
}

int getVariableNodeNumber(char *name)
{
    int count = 0;
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    while ((variable_temp_node = variable_temp_node->next) != NULL) {
        if (strcmp(variable_temp_node->variable->name, name) == 0) {
            count++;
        }
    }

    return count;
}

int judgeVariableNodeExist(char *name)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    if (variable_temp_node == NULL) {
        return FALSE;
    }

    while ((variable_temp_node = variable_temp_node->next) != NULL) {
        if (strcmp(variable_temp_node->variable->name, name) == 0) {
            return TRUE;
        }
    }

    return FALSE;
}

char *getConstantNodeValue(int index)
{
    ConstantTableNode *constant_temp_node;
    constant_temp_node = g_constant_head_node;

    constant_temp_node = getConstantNode(index);

    if (constant_temp_node != NULL) {
        return constant_temp_node->constant->value;
    }
    else {
        return NULL;
    }
}

char *getVariableNodeValue(int index)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    variable_temp_node = getVariableNode(index);

    if (variable_temp_node != NULL) {
        return variable_temp_node->variable->value;
    }
    else {
        return NULL;
    }
}

char *getSymbolNodeValue(int index)
{
    if (index > 0) {
        return getConstantNodeValue(index);
    }
    else {
        return getVariableNodeValue(index);
    }
}

char *getSymbolNodeValueOrName(int index)
{
    char *value_or_name;

    if (index > 0) {
        value_or_name = getConstantNode(index)->constant->value;
        if (value_or_name == NULL) {
            return NULL;
        }
        else {
            return value_or_name;
        }
    }
    else if (index < 0) {
        value_or_name = getVariableNode(index)->variable->name;
        if (value_or_name == NULL) {
            return NULL;
        }
        else {
            return value_or_name;
        }
    }
    else {
        value_or_name = "-";
        return value_or_name;
    }
}

ConstantTableNode *getConstantNode(int index)
{
    ConstantTableNode *constant_temp_node;
    constant_temp_node = g_constant_head_node;

    while ((constant_temp_node = constant_temp_node->next) != NULL) {
        if (constant_temp_node->index == index) {
            return constant_temp_node;
        }
    }

    return NULL;
}

VariableTableNode *getVariableNode(int index)
{
    VariableTableNode *variable_temp_node;
    variable_temp_node = g_variable_head_node;

    while ((variable_temp_node = variable_temp_node->next) != NULL) {
        if (variable_temp_node->index == index) {
            return variable_temp_node;
        }
    }

    return NULL;
}

void *getSymbolNode(int index)
{
    if (index > 0) {
        return getConstantNode(index);
    }
    else {
        return getVariableNode(index);
    }
}
