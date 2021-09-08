#include <stdio.h>
#include "mysource.h"

void generateChars(char *myarr, int len)
{
    for(int i = 0; i<len; i++)
    {
        myarr[i] = 'a' + (rand() % 26);
    }
}
void offsetChars(char *myarr, int len)
{
    for(int i = 0; i<len; i++)
    {
        if(myarr[i]=='z')
        {
            myarr[i]='a';
        }
        else
        {
            myarr[i]=myarr[i]+1;
        }
    }
}
void printChars(char *myarr, int len)
{
    for(int i = 0; i<len; i++)
    {
        printf("%c",myarr[i]);
    }
}
