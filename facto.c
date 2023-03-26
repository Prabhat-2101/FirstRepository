#include<stdio.h>
void main()
{
    int fact=1,i=1,n;
    printf("enter your no.\n");
    scanf("%d",&n);
    //use while loop
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d is factorial\n",fact);
}
