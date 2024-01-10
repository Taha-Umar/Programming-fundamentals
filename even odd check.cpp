#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << ("Please enter a number:   ");
	cin >> number;

	if (number >= 0)
	{
		//check number is even or not
		if (number % 2 == 0)
		{
			cout << ("The Number entered is positive and Even  ");
		}
		else
		{
			cout << ("The Number entered is positive and Odd   ");
		}
	}
	else
	{
		cout << ("The number entered is negative   ");
	}
	system("pause");
	return 0;
}