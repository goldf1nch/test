// lab_work.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <locale.h>
#include <conio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	int m,j;
	int k=0;
	int x=1;
	setlocale(LC_ALL, "rus");
	printf_s("Лабораторная работа №3, вариант 1.\nВведите число m: \n");
	scanf_s("%d", &m);
	printf_s("\nk=%d", k);
	printf_s("\n\nТаблица степеней числа 3.");
	printf_s("\n%d", x);
	for (int i=0; i<15; i++)
	{
		x=x*3;
		printf_s("\n%d", x);
	}
	_getch();
	return 0;
}
