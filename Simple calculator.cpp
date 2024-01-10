#include<iostream>
using namespace std;
int main()
{
	int num1, num2, out;
	char op;
	cout << ("Enter The First Operand ");
	cin >> num1;
	cout << ("Enter The Second Operand ");
	cin >> num2;
	cout << ("Enter The operator ");
	cin >> op;
	if (op == '+')
	{
		out = num1 + num2;
	}
	else if (op == '-')
	{
		out = num2 - num1;
	}
	else if (op == '*')
	{
		out = num1*num2;
	}
	else if (op == '/')
	{
		out = num2 / num1;
	}
	else if (op == '%')
	{
		out = num2%num1;
	}
	else
	{
		cout << ("Please Enter a valid opperator ");
	}
	cout << "Your Output is " << out;
	system("pause");
	return 0;
