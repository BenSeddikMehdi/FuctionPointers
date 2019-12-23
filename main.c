#include <stdio.h>
#include <stdint.h>
#include "Function_Pointers.h"

int main() {
    char hexTab[9] = "";
    do_test(test, 321432, hexTab);
    printf("hexTab = 0x%s ", hexTab);
    return 0;
}