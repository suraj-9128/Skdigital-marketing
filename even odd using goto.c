#include<stdio.h>
int main()
{
    int a=5;
    printf("\n enter a number");
    scanf("%d ", &a);
    if(a%2 == 0)
        goto even;
        else
        goto odd;

        even:
        printf("\n even number is=a", a);

        odd:
        printf("\n odd number is=a", a);

        return 0;

    
}