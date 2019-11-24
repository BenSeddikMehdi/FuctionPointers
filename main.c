#include <stdio.h>

typedef int (*operation_ptr) (int, int);

int add(int a, int b) { return a + b;}
int multiply(int a, int b) { return a * b;}

int do_operation(int (*op)(int, int), int x, int y) {
    return op(x, y);
}
int do_ptr(operation_ptr op_ptr, int x, int y) {
    return op_ptr(x, y);
}

int main() {
    int a = do_operation(add, 5, 6);
    int b = do_operation(multiply, 7, 4);
    int a_ptr = do_ptr(add, 5, 6);
    int b_ptr = do_ptr(multiply, 7, 4);
    printf("a = %d\nb = %d\na_ptr = %d\nb_ptr = %d\n", a, b, a_ptr, b_ptr);
    return 0;
}