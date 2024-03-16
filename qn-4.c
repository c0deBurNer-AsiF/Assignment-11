/*9. Write a function to check whether a given number contains a given digit or not.
(TSRS)*/

#include<stdio.h>
void yesornot(int,int);
int main()
{
    int n,m;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("enter a digit:\n");
    scanf("%d",&m);

    yesornot(n,m);
}
void yesornot(int x,int y)
{
    int i=0;
    while(x>10)
    {
        i=x%10;

        if(i==y)
        {
            printf("This number contains a digit\n");
            break;
        }
        x=x/10;

    }
    if(x<10)
        printf("This number does not contain any digit ");


}
