#include<stdio.h>
int main()
{
    int fact=1,num,i=1;
    printf("Enter a n
    umber to find factorial : ");
    scanf("%d",&num);

    for(i;i<=num;i++)
    {
        fact=fact*i;
        


    }
    printf("factorial is %d: ",fact);
    return 0;
}