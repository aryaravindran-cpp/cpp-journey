#include<iostream>
using namespace std;

int multiply(int a, int b);

bool isEven(int n);

void printStars(int count);

int main()
{
	cout << "multiply :" << multiply(2, 5) << endl;

	cout << boolalpha;
	cout << "iseven:" << isEven(10) << endl;
	cout << "iseven: " << isEven(15) << endl;

	printStars(4);

	//cout << printStars(4) << endl;

	return 0;
}

int multiply(int a, int b)
{
	return a * b;
}

bool isEven(int n)
{
	if (n % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printStars(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "*";
	}
	cout << endl;
}