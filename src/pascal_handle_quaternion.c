#include <stdio.h>
#include <stdlib.h>
#include "pascal_handle_symbol_table.h"
#include "pascal_handle_quaternion.h"

int g_quaternion_index = 1;
QuaternionTableNode *g_quaternion_head_node, *g_quaternion_tail_node;

void createQuaternionNode(void)
{
    g_quaternion_head_node = 
        (QuaternionTableNode *)malloc(sizeof(QuaternionTableNode));
    g_quaternion_head_node->quaternion = 
        (QuaternionTable *)malloc(sizeof(QuaternionTable));

    g_quaternion_tail_node = g_quaternion_head_node;

    g_quaternion_head_node->index                  = 0;
    g_quaternion_head_node->quaternion->argument_a = 0;
    g_quaternion_head_node->quaternion->argument_b = 0;
    g_quaternion_head_node->quaternion->opcode     = 0;
    g_quaternion_head_node->quaternion->result     = 0;
    g_quaternion_head_node->next                   = NULL;
}

void deleteQuaternionNode(void)
{
    QuaternionTableNode *quaternion_temp_node_a, *quaternion_temp_node_b;
    quaternion_temp_node_a = g_quaternion_head_node;

    while (quaternion_temp_node_a != NULL) {
        quaternion_temp_node_b = quaternion_temp_node_a->next;
        free(quaternion_temp_node_a);
        quaternion_temp_node_a = quaternion_temp_node_b;
    }

    g_quaternion_head_node = NULL;
}

void printQuaternionNode(void)
{
    char *argument_a, *argument_b, *result, *opcode;
    QuaternionTableNode *quaternion_temp_node;
    quaternion_temp_node = g_quaternion_head_node;

    printf("==============================================================\n");
    printf("                       Quaternion Table                       \n");
    printf("==============================================================\n");
    printf("[index]   [opcode]    [argument a]    [argument b]    [result]\n");

    while ((quaternion_temp_node = quaternion_temp_node->next) != NULL) {
        if (quaternion_temp_node->quaternion->opcode == OPCODE_ADD) {
            opcode = "+";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_SUB) {
            opcode = "-";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_MUL) {
            opcode = "*";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_DIV) {
            opcode = "/";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_ASSIGN) {
            opcode = ":=";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JLT) {
            opcode = "j<";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JGT) {
            opcode = "j>";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JLE) {
            opcode = "j<=";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JGE) {
            opcode = "j>=";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JEQ) {
            opcode = "j=";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JNE) {
            opcode = "j<>";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JNZ) {
            opcode = "jnz";
        }
        else if (quaternion_temp_node->quaternion->opcode == OPCODE_JMP) {
            opcode = "j";
        }
        else {
            opcode = "?";
        }

        argument_a = getSymbolNodeValueOrName(
            quaternion_temp_node->quaternion->argument_a);
        argument_b = getSymbolNodeValueOrName(
            quaternion_temp_node->quaternion->argument_b);

        if (quaternion_temp_node->quaternion->opcode >= OPCODE_JLT &&
            quaternion_temp_node->quaternion->opcode <= OPCODE_JMP) {
            result = (char *)malloc(sizeof(char) * STRING_SIZE);
            sprintf(result, "%d", quaternion_temp_node->quaternion->result);
        }
        else {
            result = getSymbolNodeValueOrName(
                quaternion_temp_node->quaternion->result);
        }

        printf("%-7d   %-8s    %-12s    %-12s    %-8s\n",
            quaternion_temp_node->index, opcode, argument_a, argument_b,
            result);

        if (quaternion_temp_node->quaternion->opcode > OPCODE_JLT &&
            quaternion_temp_node->quaternion->opcode < OPCODE_JMP) {
            free(result);
            result = NULL;
        }
    }
}

int backpatchQuaternionNodeChain(int chain, int index)
{
    int temp_a = chain;
    int temp_b;

    while (temp_a != 0) {
        if (getQuaternionNode(temp_a) != NULL) {
            temp_b = getQuaternionNode(temp_a)->quaternion->result;
            getQuaternionNode(temp_a)->quaternion->result = index;
            temp_a = temp_b;
        }
        else {
            return FALSE;
        }
    }

    return TRUE;
}

int generateQuaternionNode(int argument_a, int argument_b, int result,
                           int opcode)
{
    QuaternionTableNode *quaternion_new_node;
    quaternion_new_node = 
        (QuaternionTableNode *)malloc(sizeof(QuaternionTableNode));
    quaternion_new_node->quaternion =
        (QuaternionTable *)malloc(sizeof(QuaternionTable));

    if (g_quaternion_head_node == NULL) {
        createQuaternionNode();
    }

    quaternion_new_node->index                  = g_quaternion_index;
    quaternion_new_node->quaternion->argument_a = argument_a;
    quaternion_new_node->quaternion->argument_b = argument_b;
    quaternion_new_node->quaternion->opcode     = opcode;
    quaternion_new_node->quaternion->result     = result;
    g_quaternion_tail_node->next                = quaternion_new_node;
    g_quaternion_tail_node                      = quaternion_new_node;
    g_quaternion_tail_node->next                = NULL;

    g_quaternion_index++;

    return quaternion_new_node->index;
}

int getQuaternionNodeIndex(int argument_a, int argument_b, int result,
                           int opcode)
{
    QuaternionTableNode *quaternion_temp_node;
    quaternion_temp_node = g_quaternion_head_node;

    while ((quaternion_temp_node = quaternion_temp_node->next) != NULL) {
        if (quaternion_temp_node->quaternion->argument_a == argument_a &&
            quaternion_temp_node->quaternion->argument_b == argument_b &&
            quaternion_temp_node->quaternion->result     == result     &&
            quaternion_temp_node->quaternion->opcode     == opcode) {
            return quaternion_temp_node->index;
        }
    }

    return FALSE;
}

int mergeQuaternionNodeChain(int chain_a, int chain_b)
{
    int temp;

    if (chain_b == 0) {
        return chain_a;
    }
    else {
        temp = chain_b;
        while (getQuaternionNode(temp)->quaternion->result != 0) {
            temp = getQuaternionNode(temp)->quaternion->result;
        }
        getQuaternionNode(temp)->quaternion->result = chain_a;
        return chain_b;
    }
}

QuaternionTableNode *getQuaternionNode(int index)
{
    QuaternionTableNode *quaternion_temp_node;
    quaternion_temp_node = g_quaternion_head_node;

    while ((quaternion_temp_node = quaternion_temp_node->next) != NULL) {
        if (quaternion_temp_node->index == index) {
            return quaternion_temp_node;
        }
    }

    return NULL;
}
