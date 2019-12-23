//
// Created by El Mehdi Benseddik on 12/23/2019.
//

#ifndef FUCTIONPOINTERS_FUNCTION_POINTERS_H
#define FUCTIONPOINTERS_FUNCTION_POINTERS_H

// Add function
int add(int a, int b);

// Multiply function
int multiply(int a, int b);

// Function Pointer:
int do_operation(int (*op)(int, int), int x, int y);

#endif //FUCTIONPOINTERS_FUNCTION_POINTERS_H
