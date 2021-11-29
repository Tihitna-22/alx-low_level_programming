#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c -c -fPIC -shared -o liball.so
