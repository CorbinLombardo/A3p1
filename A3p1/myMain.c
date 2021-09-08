#include <stdio.h>
#include <stdlib.h>
#include "mysource.h"
#include "mysource.c"
int main(int argc, char *argv[])
{
    int len = atoi(argv[1]);
    char* myarr[len];
    generateChars(*myarr, len);
    printf("Original random string:\n");
    printChars(*myarr, len);
    printf("\n");
    offsetChars(*myarr, len);
    printf("Offset string:\n");
    printChars(*myarr, len);
    return 0;
}
