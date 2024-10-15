#include <iostream>
#include <Windows.h>

void printarr(int arr[], int size)
{
	std::cout << "arrint: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void printarr(char arr[], int size)
{
	std::cout << "arrchar: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void printarr(double arr[], int size)
{
	std::cout << "arrdouble: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int intarr[5] = { 1,2,3,4,5 };
	char chararr[5] = { 'a', 'b','c','d','e' };
	double doublearr[5] = { 1.1,2.2,3.3,4.4,5.5 };

	printarr(intarr, 5);
	printarr(chararr, 5);
	printarr(doublearr, 5);

	return 0;
}