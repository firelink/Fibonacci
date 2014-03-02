// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long fibonacci(long n);

int _tmain(int argc, _TCHAR* argv[])
{
	long result, number = 0;

	while(number != EOF)
	{
		cout << "Enter an integer: ";
		cin >> number;
		result = fibonacci(number);
		cout << "Fibonacci(" << number << ") = " << result << endl;
		cout << endl;
	}
	return 0;
}

long fibonacci(long n)
{
	if(0 == n || 1 == n){return n;}
	else{return fibonacci(n -1) + fibonacci(n-2);}
}

