#ifndef PASCAL_HANDLE_QUATERNION_H
#define PASCAL_HANDLE_QUATERNION_H

#define OPCODE_ADD    500
#define OPCODE_SUB    501
#define OPCODE_MUL    502
#define OPCODE_DIV    503
#define OPCODE_MINUS  504
#define OPCODE_ASSIGN 505
#define OPCODE_JLT    506
#define OPCODE_JGT    507
#define OPCODE_JLE    508
#define OPCODE_JGE    509
#define OPCODE_JEQ    510
#define OPCODE_JNE    511
#define OPCODE_JNZ    512
#define OPCODE_JMP    513

#define STRING_SIZE   20
#define TRUE          1
#define FALSE         0

typedef struct QuaternionTable {
    int  argument_a;
    int  argument_b;
    int  result;
    int  opcode;
} QuaternionTable;

typedef struct QuaternionTableNode {
    int                        index;
    struct QuaternionTable     *quaternion;
    struct QuaternionTableNode *next;
} QuaternionTableNode;

extern void createQuaternionNode(void);
extern void deleteQuaternionNode(void);
extern void printQuaternionNode(void);
extern int backpatchQuaternionNodeChain(int chain, int index);
extern int generateQuaternionNode(int argument_a, int argument_b, int result,
                                  int opcode);
extern int getQuaternionNodeIndex(int argument_a, int argument_b, int result,
                                  int opcode);
extern int mergeQuaternionNodeChain(int chain_a, int chain_b);
extern QuaternionTableNode *getQuaternionNode(int index);

#endif // PASCAL_HANDLE_QUATERNION_H
