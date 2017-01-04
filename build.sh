#!/bin/bash

DIRECTORY_BUILD="build"

PREFIX="pascal_simple_compiler"

FLEX="flex -v --header-file"
BISON="bison -v --defines"

# Judge whether the build directory exists.
if [ ! -d ${DIRECTORY_BUILD} ]; then
    mkdir ${DIRECTORY_BUILD}
    echo "Create ${DIRECTORY_BUILD} directory successfully!"
fi

# Generate lex and yacc files.
${FLEX}=include/${PREFIX}_lex.h -o src/${PREFIX}_lex.c config/${PREFIX}.l
${BISON}=include/${PREFIX}_yacc.h -o src/${PREFIX}_yacc.c config/${PREFIX}.y

# Build the project.
cd ${DIRECTORY_BUILD};
cmake ../;
make;
