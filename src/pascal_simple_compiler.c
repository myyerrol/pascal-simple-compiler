#include <stdio.h>
#include "pascal_simple_compiler_lex.h"
#include "pascal_simple_compiler_yacc.h"

#if 1
int main(int argc, char **argv)
{
    char *file_name = NULL;
    yyin = stdin;

#if 1
    if (argc > 1) {
        if ((yyin=fopen(argv[1], "r")) == NULL) {
            printf("Error, can't not open file %s!\n", argv[1]);
            return 0;
        }
    }
#endif

#if 0
    file_name = "pascal_error_repeated_definition.pas";

    if ((yyin=fopen(file_name, "r")) == NULL) {
        printf("Error, can't not open file %s!\n", file_name);
        return 0;
    }
#endif

#if 0
    file_name = "pascal_error_not_definition.pas";

    if ((yyin=fopen(file_name, "r")) == NULL) {
        printf("Error, can't not open file %s!\n", file_name);
        return 0;
    }
#endif

    yyparse();

    return 0;
}
#endif
