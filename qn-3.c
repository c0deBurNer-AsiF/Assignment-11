/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int combination(int,int);
int main()
{
    int a,b;
    int k;
    printf("enter the items number:\n");
    scanf("%d",&a);

    printf("Enter the times:\n");
    scanf("%d",&b);

    k=combination(a,b);
    printf("The combination is: %d",k);
    return 0;
}
int combination(int n,int r)
{
    double i,x=1,y=1,z=1,m=n-r;

    for(i=n;i>0;i--)
        x=x*i;

    for(i=r;i>0;i--)
        y=y*i;

    for(i=m;i>0;i--)
        z=z*i;

    return x/(y*z);
}

