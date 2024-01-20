// Lesson_1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Составить блок-схему алгоритма, а затем программу для нахождения значений переменной  z при изменении x с 
// заданным шагом в заданных пределах. Представить задачу в  двух вариантах циклов:
//•	с оператором while,
//•	с оператором do ..while.
//Предусмотреть ввод значения а с клавиатуры.
//Вывести на печать все значения x  и z.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float dx = 0.1, y, a, z, x = 0.1;
    printf("Выберите цикл для выполнения задачи:\n1 - WHILE\n2 - DO WHILE\n");
    int c = _getch();

    printf("Введите значение а: ");
    scanf_s("%f", &a);

    if (a == 0) {
        printf("Error! a не может быть нулевым!");
        return 0;
    }

	if (c == 49)
	{
		while (x >= 0 && x <= 2)
		{
			y = pow(sin(a * x), 2) + cos(a * x);
			if (y > x) {
				z = y - pow(cos(x / a), 2);
			}
			else {
				z = pow(y, 2) * sin(a * x) + sqrt(fabs(x));
			}
			printf("X = %2f\tz = %2f\n", x, z);
			x += dx;
		}
	}
	else if (c == 50)
	{
		do
		{
			y = pow(sin(a * x), 2) + cos(a * x);
			if (y > x) {
				z = y - pow(cos(x / a), 2);
			}
			else {
				z = pow(y, 2) * sin(a * x) + sqrt(fabs(x));
			}
			printf("X = %2f\tz = %2f\n", x, z);
			x += dx;
		} while (x >= 0 && x <= 2);
	}
	else
	{
		printf("Вы выбрали неправильное значение цикла!!!\n ");
		return 0;
	}
	
	return 0;
}

