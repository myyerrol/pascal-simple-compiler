#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pascal_handle_syntax_tree.h"

int g_st_queue_index = 1;
struct SyntaxTreeQueueNode *g_st_queue_head_node, *g_st_queue_tail_node;

void printAbstractSyntaxTreeNode(AbstractSyntaxTreeNode *ast_node)
{
    int current = 1;
    int end     = 2;
    struct SyntaxTreeQueueNode *st_queue_temp_node;

    printf("==============================================================\n");
    printf("                     Abstract Syntax Tree                     \n");
    printf("==============================================================\n");

    addSyntaxTreeQueueNode(ast_node);

    while (current < g_st_queue_index) {
        end = g_st_queue_index;
        while (current < end) {
            st_queue_temp_node = getSyntaxTreeQueueNode(current);
            printf("%s ", getSyntaxTreeQueueNodeValue(current));
            if (st_queue_temp_node->st_node->son != NULL) {
                addSyntaxTreeQueueNode(st_queue_temp_node->st_node->son);
                st_queue_temp_node->st_node =
                    st_queue_temp_node->st_node->son;
            }
            else {
                st_queue_temp_node->st_node = 
                    st_queue_temp_node->st_node->brother;
                current++;
                continue;
            }
            while (st_queue_temp_node->st_node->brother != NULL) {
                addSyntaxTreeQueueNode(
                    st_queue_temp_node->st_node->brother);
                st_queue_temp_node->st_node =
                    st_queue_temp_node->st_node->brother;
            }
            current++;
        }
        printf("\n");
    }
}

void deleteSyntaxTreeNode(void)
{
    deleteSyntaxTreeQueueNode();
}

void deleteSyntaxTreeQueueNode(void)
{
    struct SyntaxTreeQueueNode *st_queue_temp_node_a, *st_queue_temp_node_b;
    st_queue_temp_node_a = g_st_queue_head_node;

    while (st_queue_temp_node_a != NULL) {
        st_queue_temp_node_b = st_queue_temp_node_a->next;
        free(st_queue_temp_node_a);
        st_queue_temp_node_a = st_queue_temp_node_b;
    }

    g_st_queue_head_node = NULL;
}

void createSyntaxTreeQueueNode()
{
    g_st_queue_head_node = (struct SyntaxTreeQueueNode *)
        malloc(sizeof(struct SyntaxTreeQueueNode));
    g_st_queue_tail_node = g_st_queue_head_node;

    g_st_queue_head_node->index   = 0;
    g_st_queue_head_node->st_node = NULL;
    g_st_queue_head_node->next    = NULL;
}

int addSyntaxTreeQueueNode(struct SyntaxTreeNode *st_node)
{
    struct SyntaxTreeQueueNode *st_queue_new_node;
    st_queue_new_node = (struct SyntaxTreeQueueNode *)malloc(
        sizeof(struct SyntaxTreeQueueNode));

    if (g_st_queue_head_node == NULL) {
        createSyntaxTreeQueueNode();
    }

    if (st_node != NULL) {
        st_queue_new_node->index   = g_st_queue_index;
        st_queue_new_node->st_node = st_node;
        g_st_queue_tail_node->next = st_queue_new_node;
        g_st_queue_tail_node       = st_queue_new_node;
        g_st_queue_tail_node->next = NULL;
        g_st_queue_index++;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int createSyntaxTreeNode(struct SyntaxTreeNode **st_node)
{
    if (st_node != NULL) {
        *st_node =
            (struct SyntaxTreeNode *)malloc(sizeof(struct SyntaxTreeNode));
        if (initSyntaxTreeNode(*st_node)) {
            return TRUE;
        }
        else {
            return ERROR;
        }
    }
    else {
        return FALSE;
    }
}

int initSyntaxTreeNode(struct SyntaxTreeNode *st_node)
{
    if (st_node != NULL) {
        st_node->type    = NODE_NULL;
        st_node->value   = NULL;
        st_node->parent  = NULL;
        st_node->son     = NULL;
        st_node->brother = NULL;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int setSyntaxTreeNode(struct SyntaxTreeNode *st_node, int type, char *value)
{
    if (st_node != NULL && value != NULL) {
        if (st_node->value != NULL) {
            free(st_node->value);
        }
        st_node->type  = type;
        st_node->value = (char *)malloc(strlen(value) + 1);
        strcpy(st_node->value, value);
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int addSyntaxTreeSonNode(struct SyntaxTreeNode *st_parent_node,
struct SyntaxTreeNode *st_son_node)
{
    if (st_parent_node != NULL && st_son_node != NULL) {
        if (st_parent_node->son == NULL) {
            st_parent_node->son = st_son_node;
        }
        else {
            struct SyntaxTreeNode *temp_node = st_parent_node->son;
            while (temp_node->brother != NULL) {
                temp_node = temp_node->brother;
            }
            temp_node->brother = st_son_node;
            st_son_node->parent = st_parent_node;
        }
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int addSyntaxTreeBrotherNode(struct SyntaxTreeNode *st_current_node,
struct SyntaxTreeNode *st_brother_node)
{
    if (st_current_node != NULL && st_brother_node != NULL) {
        struct SyntaxTreeNode *temp_node = NULL;
        if (st_current_node->parent == NULL) {
            return ERROR;
        }
        else {
            st_current_node->brother = st_brother_node;
            st_brother_node->parent = st_current_node->parent;
        }
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int getSyntaxTreeSonNode(struct SyntaxTreeNode *st_parent_node, 
struct SyntaxTreeNode **st_son_node)
{
    if (st_parent_node != NULL && st_son_node != NULL) {
        *st_son_node = st_parent_node->son;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int getSyntaxTreeBrotherNode(struct SyntaxTreeNode *st_current_node,
struct SyntaxTreeNode **st_brother_node)
{
    if (st_current_node != NULL && st_brother_node != NULL) {
        *st_brother_node = st_current_node->brother;
        return TRUE;
    }
    else {
        return FALSE;
    }
}

char *getSyntaxTreeQueueNodeValue(int index)
{
    if (getSyntaxTreeQueueNode(index) != NULL) {
        return getSyntaxTreeQueueNode(index)->st_node->value;
    }
    else {
        return NULL;
    }
}

struct SyntaxTreeQueueNode *getSyntaxTreeQueueNode(int index)
{
    struct SyntaxTreeQueueNode *st_queue_temp_node;
    st_queue_temp_node = g_st_queue_head_node;

    while ((st_queue_temp_node = st_queue_temp_node->next) != NULL) {
        if (st_queue_temp_node->index == index) {
            return st_queue_temp_node;
        }
    }
    
    return NULL;
}

struct SyntaxTreeNode **createSyntaxTreeNodePointer()
{
    struct SyntaxTreeNode **st_node;
    st_node = (struct SyntaxTreeNode **)malloc(sizeof(struct SyntaxTreeNode));
    return st_node;
}
