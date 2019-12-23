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
uint32_t do_test(uint32_t octet, uint32_t (*op) (uint32_t, char[9]), char hex[9]) {
    return op(octet, hex);
}

uint32_t test(uint32_t octet, char hex[9]) {
    uint32_t i = 0, temp;
    while (i < 8) {
        temp = octet % 16;
        if (temp == 10)
            hex[7-i] = 'A';
        else if (temp == 11)
            hex[7-i] = 'B';
        else if (temp == 12)
            hex[7-i] = 'C';
        else if (temp == 13)
            hex[7-i] = 'D';
        else if (temp == 14)
            hex[7-i] = 'E';
        else if (temp == 15)
            hex[7-i] = 'F';
        else
            hex[7-i] = (char) (temp + '0');
        octet /= 16;
        i++;
    }
    hex[i] = '\0';
    return 0;
}