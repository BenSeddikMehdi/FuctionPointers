//
// Created by HP-EliteBook on 12/23/2019.
//

#include "Function_Pointers.h"

typedef int (*operation_ptr) (int, int);

int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}

int do_operation(int (*op)(int, int), int x, int y) {
    return op(x, y);
}
int do_ptr(operation_ptr op_ptr, int x, int y) {
    return op_ptr(x, y);
}