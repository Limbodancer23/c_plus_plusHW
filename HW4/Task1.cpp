#include <iostream>;

//1)Написать программу, проверяющую что сумма двух(введенных с клавиатуры) чисел лежит в пределах от 10 до 20 (включительно), если да – вывести строку "true", в противном случае – "false";
//2)Написать программу, выводящую на экран строку “true”, если две целочисленные константы, объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти.Иначе "false".
//3)Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50. Например: "Your numbers: 1 3 5 7 9 11 13 …".Для решения используйте любой С++ цикл.
//4)Со звёздочкой.Написать программу, проверяющую, является ли некоторое число - простым.Простое число — это целое положительное число, которое делится без остатка только на единицу и себя само.
//5)Со звёздочкой.Пользователь вводит с клавиатуры число(год) : от 1 до 3000. Написать программу, которая определяет является ли этот год високосным.
//Каждый 4 - й год является високосным, кроме каждого 100 - го,
//при этом каждый 400 - й – високосный.Вывести результаты работы программы в консоль.

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

