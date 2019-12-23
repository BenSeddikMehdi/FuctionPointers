//
// Created by El Mehdi Benseddik on 12/23/2019.
//

#ifndef FUCTIONPOINTERS_FUNCTION_POINTERS_H
#define FUCTIONPOINTERS_FUNCTION_POINTERS_H

typedef int (*operation_ptr) (int, int);

// Add function
int add(int a, int b);

// Multiply function
int multiply(int a, int b);

// Function Pointer:
int do_operation(int (*op)(int, int), int x, int y);

// Function Pointer:
int do_ptr(operation_ptr op_ptr, int x, int y);

// Test function:
uint32_t do_test(uint32_t octet, uint32_t (*op) (uint32_t, char[8]), char hex[8]);

#endif //FUCTIONPOINTERS_FUNCTION_POINTERS_H
