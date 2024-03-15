//write a function to print N terms of fibonacci series.


#include<stdio.h>
void fibonacci(int *);
int main()
{
    int n,*p;
    p=&n;
    printf("How many fibonacci series u want?\n");
    scanf("%d",p);

    fibonacci(p);

}

void fibonacci(int *q)
{
    int x=0,y=1,z,i;

    for(i=0;i<*q;i++)
        {
           z=x+y;
           x=y;
           y=z;
           printf("%d ",z);
        }
}
