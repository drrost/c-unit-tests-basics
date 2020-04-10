#!/bin/bash

rm -f app
clear

clang -std=c11 -Wall -Wextra -Werror -Wpedantic ./main.c -o app

./app
