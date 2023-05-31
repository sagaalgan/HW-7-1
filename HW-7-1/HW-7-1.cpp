﻿#include <iostream>

#define MODE 1

#if !defined(MODE)
#error "Необходимо определить MODE"
#endif

int add(int a, int b)
{
	return a + b;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	if (MODE == 0)
	{
		std::cout << "Работаю в режиме тренировки" << std::endl;
	}
	else if (MODE == 1)
	{
		std::cout << "Работаю в боевом режиме" << std::endl;
		int a, b;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
	}
	else
	{
		std::cout << "Неизвестный режим. Завершение работы" << std::endl;
	}
	return 0;
}