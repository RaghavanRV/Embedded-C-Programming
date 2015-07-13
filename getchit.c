#include <stdio.h>
#include <conio.h>

int main(void)
{
    char key;

    printf("Press a key: ");
    key = getch();
    printf("\nYou pressed the %c key\n", key);

    getch();
    return 0;
}
