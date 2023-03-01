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
}