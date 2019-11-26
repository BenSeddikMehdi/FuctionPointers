//
// Created by HP-EliteBook on 11/25/2019.
//

#ifndef FUCTIONPOINTERS_FUNCTIONPOINTERS_H
#define FUCTIONPOINTERS_FUNCTIONPOINTERS_H

typedef int (*operation_ptr) (int, int);

int add(int a, int b) { return a + b;}
int multiply(int a, int b) { return a * b;}

int do_operation(int (*op)(int, int), int x, int y) {
    return op(x, y);
}
int do_ptr(operation_ptr op_ptr, int x, int y) {
    return op_ptr(x, y);
}
int externVar = 12;
#endif //FUCTIONPOINTERS_FUNCTIONPOINTERS_H
