#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "libraries.h"


int main()
{
    int size = 8;
    int ages [] = {1, 7, 8, 2, 5, 9 , 99, 19};
    printf("%d\n", oldestValues(ages, size));
    return 0;

}