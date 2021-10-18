#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "hh.h"

int main()
{
	setlocale(LC_ALL, "Rus");


	double x, result;
	_Bool close = true;

	int arr[N];

	while (close)
	{
		printf("1. Задание 1\n");
		printf("2. Задание 2\n");
		printf("3. Выход\n");
		switch (getch())
		{
		case '1':
			printf("Введите x = ");
			scanf_s("%lf", &x);
			f(&x, &result);							
			printf("f = %lf \n", result);
			break;
		case '2':
			sortStackArray(arr, N);
			break;
		case '3':
			close = false;
			break;
		}

	}
}
