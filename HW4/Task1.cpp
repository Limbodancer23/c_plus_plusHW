#include <iostream>;

//1)�������� ���������, ����������� ��� ����� ����(��������� � ����������) ����� ����� � �������� �� 10 �� 20 (������������), ���� �� � ������� ������ "true", � ��������� ������ � "false";
//2)�������� ���������, ��������� �� ����� ������ �true�, ���� ��� ������������� ���������, ����������� � � ������ ���� ��� ����� ������ ���� �� ����, ���� �� ����� ����� ������.����� "false".
//3)�������� ��������� ������� ������� �� ����� ������ ���� �������� ����� �� 1 �� 50. ��������: "Your numbers: 1 3 5 7 9 11 13 �".��� ������� ����������� ����� �++ ����.
//4)�� ���������.�������� ���������, �����������, �������� �� ��������� ����� - �������.������� ����� � ��� ����� ������������� �����, ������� ������� ��� ������� ������ �� ������� � ���� ����.
//5)�� ���������.������������ ������ � ���������� �����(���) : �� 1 �� 3000. �������� ���������, ������� ���������� �������� �� ���� ��� ����������.
//������ 4 - � ��� �������� ����������, ����� ������� 100 - ��,
//��� ���� ������ 400 - � � ����������.������� ���������� ������ ��������� � �������.

void RangeValues() {
	int a;
	std::cout << "Enter your number: ";
	std::cin >> a;
	int min = 10;
	int max = 20;
	if (a >= min & a <= max)
	{
		std::cout << "True" << std::endl;
	}
	else std::cout << "False" << std::endl;
}

void EqualTen() {
	int a;
	int b;
	std::cout << "Enter value A: ";
	std::cin >> a;
	std::cout << "Enter value B: ";
	std::cin >> b;
	if ((a == 10 & b == 10) || (a + b) == 10)
	{
		std::cout << "True";
	}
	else std::cout << "False";
}

void printOddNumbers(int a) {
	for (size_t i = 0; i < a; i++)
	{
		if (i % 2 != 0)
		{
			std::cout << i << " ";
		}
	}
}

void findSimpleNum() {
	int value;
	std::cin >> value;
	int count = 0;
	for (size_t i = 2; i <= value; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}
		if (count <= 1) std::cout << "True";
		else std::cout << "False";
}

void leapYearFinder() {
	size_t year;
	std::cin >> year;
	bool flag = false;

	if (year % 4 == 0) {
		flag = true;
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				flag = true;
			}
			else
			{
				flag = false;
			}
		}
	}
	if (flag) {
		std::cout << "LEAP-YEAR!";
	}
	else std::cout << "Not...";
}

int main() {

	RangeValues();

	EqualTen();

	printOddNumbers(50);
	
	findSimpleNum();

	leapYearFinder();

	return 0;
}

