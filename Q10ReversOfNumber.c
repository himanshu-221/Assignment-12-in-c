/* Write a recursive function to print reverse of a given number*/

#include<stdio.h>

void reverse(int n)
{
    if(n==0)
    return;
    printf("%d",n%10);
    reverse(n/10);
}

int main(){
    int num;
    printf("Enter a number two or more then two digit\n");
    scanf("%d",&num);
    reverse(num);
    return 0;
}