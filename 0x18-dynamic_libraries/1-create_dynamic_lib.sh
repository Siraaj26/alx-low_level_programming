#!/bin/bash
gcc -Wall -fPIC *.c
gcc  -shared *.o -o liball.so
