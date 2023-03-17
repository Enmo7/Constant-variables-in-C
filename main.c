#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable
    int not_constant;

    // constant variable;
    const int constant = 750;

    // changing values
    not_constant = 40;
    printf("not_constant: %d\n", not_constant);
    printf("constant variable: %d", constant);

    return 0;
}
