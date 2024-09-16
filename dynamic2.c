#include<stdio.h>
#include<stdlib.h>   //for malloc,calloc,realloc & free

int main()
{
    int Arr[5];  //Static memory allocation

    int Size = 0;

    int *ptr = NULL;

    printf("enter no. of element:\n");
    scanf("&d",&Size);

    ptr = (int *)calloc(Size , sizeof(int));
    //ptr = (int *)calloc(12 , 500ml);  = calloc

    //ptr = (int *)malloc(6000ml)    =  malloc

    //use the mrmory

    free(ptr);


    return 0;
}