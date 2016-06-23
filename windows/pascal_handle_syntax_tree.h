#ifndef PASCAL_HANDLE_SYNTAX_TREE_H
#define PASCAL_HANDLE_SYNTAX_TREE_H

#include <stdio.h>

#define TRUE                      1
#define FALSE                     0
#define ERROR                    -1

#define NODE_NULL                 750
#define NODE_PROGRAM              751
#define NODE_INTEGER              752
#define NODE_REAL                 753
#define NODE_ADD                  754
#define NODE_SUB                  755
#define NODE_MUL                  756
#define NODE_DIV                  757
#define NODE_VARIABLE             758
#define NODE_ASSIGN               759
#define NODE_LT                   760
#define NODE_GT                   761
#define NODE_LE                   762
#define NODE_GE                   763
#define NODE_EQ                   764
#define NODE_NE                   765
#define NODE_NOT                  766
#define NODE_AND                  767
#define NODE_OR                   768
#define NODE_IF                   769
#define NODE_THEN                 770
#define NODE_STATEMENT            771
#define NODE_WHILE                772
#define NODE_SEMICOLON            773
#define NODE_TYPE                 774
#define NODE_VAR                  775
#define NODE_IDENTIFIER           776
#define NODE_MINUS                777
#define NODE_DEFINITION           778
#define NODE_COLON                779

#define PRINT_SPACE(count)        \
do {                              \
    int i;                        \
    for (i = 0; i < count; i++) { \
        printf(" ");              \
    }                             \
} while (0)

typedef struct SyntaxTreeNode {
    int                   type;
    char                  *value;
    struct SyntaxTreeNode *parent;
    struct SyntaxTreeNode *son;
    struct SyntaxTreeNode *brother;
} AbstractSyntaxTreeNode, SpecificSyntaxTreeNode;

typedef struct SyntaxTreeQueueNode {
    int                        index;
    struct SyntaxTreeNode      *st_node;
    struct SyntaxTreeQueueNode *next;
} AbstractSyntaxTreeQueueNode;

extern void printAbstractSyntaxTreeNode(AbstractSyntaxTreeNode *ast_node);
extern void deleteSyntaxTreeNode(void);
extern void deleteSyntaxTreeQueueNode(void);
extern void createSyntaxTreeQueueNode(void);
extern int addSyntaxTreeQueueNode(struct SyntaxTreeNode *st_node);
extern int createSyntaxTreeNode(struct SyntaxTreeNode **st_node);
extern int initSyntaxTreeNode(struct SyntaxTreeNode *st_node);
extern int setSyntaxTreeNode(struct SyntaxTreeNode *st_node, int type,
                             char *value);
extern int addSyntaxTreeSonNode(struct SyntaxTreeNode *st_parent_node,
                                struct SyntaxTreeNode *st_son_node);
extern int addSyntaxTreeBrotherNode(struct SyntaxTreeNode *st_current_node,
                                    struct SyntaxTreeNode *st_brother_node);
extern int getSyntaxTreeSonNode(struct SyntaxTreeNode *st_parent_node,
                                struct SyntaxTreeNode **st_son_node);
extern int getSyntaxTreeBrotherNode(struct SyntaxTreeNode *st_current_node,
                                    struct SyntaxTreeNode **st_brother_node);
extern char *getSyntaxTreeQueueNodeValue(int index);
extern struct SyntaxTreeQueueNode *getSyntaxTreeQueueNode(int index);
extern struct SyntaxTreeNode **createSyntaxTreeNodePointer();

#endif // PASCAL_HANDLE_SYNTAX_TREE_H
