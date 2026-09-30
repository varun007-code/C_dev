#include <stdio.h>

int main()
{
    int Num;
    printf("Enter the Number: \n");
    scanf("%d",&Num);
    printf("Your Number and Memory_address: %d and %p \n",Num,&Num);
    return 0;
}
