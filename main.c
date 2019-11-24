#include <stdio.h>

int add(int a, int b) { return a + b;}
int multiply(int a, int b) { return a * b;}

int do_operation(int (*op)(int, int), int x, int y) {
    return op(x, y);
}


int main() {
    int a = do_operation(add, 5, 6);
    int b = do_operation(multiply, 7, 4);
    printf("a = %d\nb = %d", a, b);
    return 0;
}