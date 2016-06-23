#include <stdlib.h>
#include "pascal_handle_syntax_tree.h"

#if 0
int main(void)
{
    AbstractSyntaxTreeNode **ast_test_node_a, **ast_test_node_b;
    AbstractSyntaxTreeNode **ast_test_node_c, **ast_test_node_d;
    AbstractSyntaxTreeNode **ast_test_node_e, **ast_test_node_f;
    AbstractSyntaxTreeNode **ast_test_node_g;

    ast_test_node_a =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_b =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_c =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_d =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_e =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_f =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    ast_test_node_g =
        (AbstractSyntaxTreeNode **)malloc(sizeof(AbstractSyntaxTreeNode));
    
    createSyntaxTreeNode(ast_test_node_a);
    createSyntaxTreeNode(ast_test_node_b);
    createSyntaxTreeNode(ast_test_node_c);
    createSyntaxTreeNode(ast_test_node_d);
    createSyntaxTreeNode(ast_test_node_e);
    createSyntaxTreeNode(ast_test_node_f);
    createSyntaxTreeNode(ast_test_node_g);

    setSyntaxTreeNode(*ast_test_node_a, NODE_INTEGER, "10");
    setSyntaxTreeNode(*ast_test_node_b, NODE_INTEGER, "20");
    setSyntaxTreeNode(*ast_test_node_c, NODE_MUL, "*");
    setSyntaxTreeNode(*ast_test_node_d, NODE_INTEGER, "30");
    setSyntaxTreeNode(*ast_test_node_e, NODE_ADD, "+");
    setSyntaxTreeNode(*ast_test_node_f, NODE_VARIABLE, "x");
    setSyntaxTreeNode(*ast_test_node_g, NODE_ASSIGN, ":=");

    addSyntaxTreeSonNode(*ast_test_node_c, *ast_test_node_a);
    addSyntaxTreeSonNode(*ast_test_node_c, *ast_test_node_b);
    addSyntaxTreeSonNode(*ast_test_node_e, *ast_test_node_d);
    addSyntaxTreeSonNode(*ast_test_node_e, *ast_test_node_c);
    addSyntaxTreeSonNode(*ast_test_node_g, *ast_test_node_f);
    addSyntaxTreeSonNode(*ast_test_node_g, *ast_test_node_e);

    printAbstractSyntaxTreeNode(*ast_test_node_g);
    deleteSyntaxTreeNode();

    return 0;
}
#endif
