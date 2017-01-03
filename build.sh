#!/bin/bash

if [ ! -d "./build" ]; then
    mkdir ./build
fi

flex -v --header-file=include/pascal_simple_compiler_lex.h -o src/pascal_simple_compiler_lex.c config/pascal_simple_compiler.l
bison -v --defines=include/pascal_simple_compiler_yacc.h -o src/pascal_simple_compiler_yacc.c  config/pascal_simple_compiler.y

cd build/; 
cmake ../; 
make;
