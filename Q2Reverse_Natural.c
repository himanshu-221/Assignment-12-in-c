/*Write a recursive function to print first N natural numbers in reverse order
*/
#include<stdio.h>

void print(int n)
{
    if(n==0)
    return;
    printf("%d\t",n);
    print(n-1);
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    print(num);
    return 0;
}