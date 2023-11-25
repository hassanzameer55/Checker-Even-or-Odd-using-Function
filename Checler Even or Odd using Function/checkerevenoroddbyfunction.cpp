#include<iostream>
using namespace std;

bool isEven(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int num;
	cout << "Enter a number to check whether it is even or odd : ";
	cin >> num;

	int even = isEven(num);
	if (even)
	{
		cout << "\nThe given number " << num << " is EVEN !";
	}
	else
	{
		cout << "\nThe given number " << num << " is ODD !";
	}
}