#include <iostream>
#include <Windows.h>    //Для ввода русских букв с консоли (SetConsoleCP(1251))


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);             // установка кодовой страницы win-cp 1251 в поток ввода

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name;
	return 0;
}