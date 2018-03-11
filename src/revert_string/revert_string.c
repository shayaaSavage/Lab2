#include "revert_string.h"
//#include "swap.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{
    int n=strlen(str);
    printf("Reverted: %d\n", n);
    for(int i=0; i<n/2;i++){
        Swap(&str[i],&str[n-i-1]);        
    }
}

