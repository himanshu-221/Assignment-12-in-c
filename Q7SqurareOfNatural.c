/*Write a recursive function to print squares of first N natural numbers
*/
#include<stdio.h>
#include<math.h>
void square(int n)
{
    if(n==0)
    return;
    square(n-1);
    printf("%.0f\t",pow(n,2));
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    square(num);
    return 0;
}