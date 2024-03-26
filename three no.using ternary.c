#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,max;
    printf("\n enter three no.");
    scanf("\n%d,%d,%d", &a,&b,&c);
    max = (a > b && a > c)?a:(b > a && b >c)?b:c;

    printf("\n maximum number is = %d ", max);
    getch();
    return 0;
}