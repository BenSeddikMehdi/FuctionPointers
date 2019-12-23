#include <stdio.h>
#include "Function_Pointers.h"

int main() {
    char hexTab[8] = "";
    do_test(23, test, hexTab);
    printf("hexTab = %s ", hexTab);


    return 0;
}