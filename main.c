#include <stdio.h>
#include "FunctionPointers.h"
#include "FunctionArgumentLists.h"
#include "FunctionReturnsString.h"

int main() {
/*    int c = do_operation(add, 6, -9);
    int a = do_operation(add, 5, 6);
    int b = do_operation(multiply, 7, 4);
    int a_ptr = do_ptr(add, 5, 6);
    int b_ptr = do_ptr(multiply, 7, 4);
    printf("a = %d\nb = %d\na_ptr = %d\nb_ptr = %d\n", c, b, a_ptr, b_ptr);*/
    print_ints(3, 34, 45, 5);
    print_ints(2, 0, -2);
    print_ints(6, 34, 19, 20, 37, 6, 6);
/*    char *name = do_string(return_string, "El Mehdi Benseddik");
    char *job = do_string(return_string, "Embedded System Engineer");
    printf("My Name is : %s\nMy Speciality : %s", name, job);*/
    return 0;
}