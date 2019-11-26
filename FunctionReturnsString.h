//
// Created by HP-EliteBook on 11/25/2019.
//

#ifndef FUCTIONPOINTERS_FUNCTIONRETURNSSTRING_H
#define FUCTIONPOINTERS_FUNCTIONRETURNSSTRING_H

typedef char* (*returnString) (char []);

char* do_string(returnString stringFunction, char s[]) {
    return stringFunction(s);
}

char* return_string(char s[]) {
    return s;
}



#endif //FUCTIONPOINTERS_FUNCTIONRETURNSSTRING_H
