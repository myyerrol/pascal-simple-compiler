# pascal_simple_compiler

[![Build Status](https://travis-ci.org/myyerrol/pascal_simple_compiler.svg?branch=master)](https://travis-ci.org/myyerrol/pascal_simple_compiler)

## Description
This is the experimental project of compile principle. It implements lexical and syntax analysis, generate intermediate codes for optimization and generating assembly in the future.

## Requirment
*   Linux x86-64
*   CMake
*   Make
*   GCC

## Configuration
Download the **pascal_simple_compiler** repository:
```bash
$> cd ~/Desktop
$> git clone https://github.com/myyerrol/pascal_simple_compiler.git
```
Execute the **build.sh** script:
```bash
$> cd pascal_simple_compiler
$> sudo ./build.sh
```

## Usage
If you use the default **bash**, using following commands:
```bash
$> cd ~/Desktop/pascal_simple_compiler
$> echo "export PATH=`pwd`/build/bin:\${PATH}" >> ~/.bashrc
$> source ~/.bashrc
```

If you use the **zsh** or other **shell**, modifying the **.bashrc** to **.zshrc** or the configuration file that corresponding to your **shell**. such as:
```bash
$> cd ~/Desktop/pascal_simple_compiler
$> echo "export PATH=`pwd`/build/bin:\${PATH}" >> ~/{your shell configuration file}
$> source ~/{your shell configuration file}
```

Test the **pascal_simple_compiler**, such as:
```bash
$> cd test
$> psc pascal_test_program_while_if.pas
```

## Summary
Although the compiler maybe has some unknown bugs or its function has not strong enough yet at now, with developing, it will become more and more better in the fucture.

## License
[GPL-3.0](./LICENSE)
