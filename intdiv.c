#include <stdio.h>
#include <conio.h>

int main(void)
{
    float numerator, denominator, result;

    printf("Enter the Numerator \n");
    scanf("%f",&numerator);
    printf("Enter the denominator \n");
    scanf("%f",&denominator);
    result = numerator / denominator;
    printf("The result of the division is %f", result);
    getch();
    return 0;

}

