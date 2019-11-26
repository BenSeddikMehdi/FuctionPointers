#include <stdio.h>
#include "FunctionPointers.h"
#include "FunctionArgumentLists.h"
#include "FunctionReturnsString.h"

int main() {
    int a = do_operation(add, 5, 6);
    int b = do_operation(multiply, 7, 4);
    int a_ptr = do_ptr(add, 5, 6);
    int b_ptr = do_ptr(multiply, 7, 4);
    printf("a = %d\nb = %d\na_ptr = %d\nb_ptr = %d\n", a, b, a_ptr, b_ptr);
/*    print_ints(5, 34, 45, 5, 4, 8);
    print_ints(3, 4, 5, 6);
    print_ints(4, 34, 19, 20, 37);*/
/*    char *name = do_string(return_string, "El Mehdi Benseddik");
    char *job = do_string(return_string, "Embedded System Engineer");
    printf("My Name is : %s\nMy Speciality : %s", name, job);*/
    return 0;
}