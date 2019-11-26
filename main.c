#include <stdio.h>
#include "FunctionPointers.h"

int main() {
    int a = do_operation(add, 6, -9);
    int b = do_operation(multiply, 7, 4);
    int a_ptr = do_ptr(add, 5, 6);
    int b_ptr = do_ptr(multiply, 7, 4);
    printf("a = %d\nb = %d\na_ptr = %d\nb_ptr = %d\n",
            a, b, a_ptr, b_ptr);


    return 0;
}