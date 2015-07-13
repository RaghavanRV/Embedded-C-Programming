#include <stdio.h>
#include <conio.h>

int main (void)
{
    char ch;

    printf("Type a character and then press Enter: ");
    scanf("%c", &ch);
    printf("\n You typed %c", ch);
    getch();
    return 0;
}

