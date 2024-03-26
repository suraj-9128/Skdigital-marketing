#include<stdio.h>
#include<conio.h>

int main()
{
    int ch;
    printf("\n enter number from 1 to 7");
    scanf("%d ", &ch);

    switch(ch)
    {
        case 1:
        printf("\n sunday");
        break;

        case 2:
        printf("\n monday");
        break;

        case 3:
        printf("\n tuesday");
        break;

        case 4:
        printf("\n wednesday");
        break;

        case 5:
        printf("\n thrusday");
        break;

        case 6:
        printf("\n friday");
        break;

        case 7:
        printf("\n saturday");
        break;

        default:
        printf("\n wrong input number");
        break;

    }
    return 0;
}