//
// Created by HP-EliteBook on 12/23/2019.
//

#include <stdint-gcc.h>
#include "Function_Pointers.h"

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
uint32_t do_test(uint32_t octet, uint32_t (*op) (uint32_t, char[8]), char hex[8]) {
    return op(octet, hex);
}

uint32_t test(uint32_t octet, char hex[8]) {
    uint32_t i = 0;
    while (octet > 16) {
        hex[7-i] = octet % 16;
        octet /= 16;
    }
    return 0;
}