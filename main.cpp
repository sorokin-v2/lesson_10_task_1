#include <iostream>
#include <Windows.h>    //��� ����� ������� ���� � ������� (SetConsoleCP(1251))


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);             // ��������� ������� �������� win-cp 1251 � ����� �����

	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name;
	return 0;
}