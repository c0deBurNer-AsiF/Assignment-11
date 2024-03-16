/*write a function to print all prime factor of a given number .
For example, if the number is 36, then your result should be 2,2,3,3(TSRN)*/

#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    prime(n);
}
void prime(int x)
{
    int i=2;
    while(i<=x)
    {
        if(x%i!=0)
        {
            i++;
        }
        if(x%i==0)
        {
            printf("%d, ",i);
            x=x/i;
        }


    }
}
