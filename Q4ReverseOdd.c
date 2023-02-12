/*Write a recursive function to print first N odd natural numbers in reverse order
*/

#include<stdio.h>

void reverseodd(int n)
{
    if(n==0)
    return;
    else if(n%2!=0)
    {
        printf("%d\t",n);
    }
    reverseodd(n-1);
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    reverseodd(num);
    return 0;
}