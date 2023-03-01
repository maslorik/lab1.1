#include <stdio.h>
#include <locale.h>
#include "conio.h"

int main()
{
    int getch();
    setlocale(LC_ALL, "Russian");
    int x, y;
    printf("Введите Х:");
    scanf_s("%d", &x);
    printf("Введите Y:");
    scanf_s("%d", &y);
    int i = 1;
    int c = 1;
    int d = 0;
    int j = 0;
    if (x > y)
    {
        while (i < x)
        {
            c = c * i;
            i++;

        }
        printf("Результат=%i", c);
    }
    else
    {
        while (d < y)
        {
            j = j + d;
            d++;
        }
        printf("Результат=%i", j);

    }
    getch();
}