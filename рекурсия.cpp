//время работы: 2^n

#include "stdafx.h"
#include <stdio.h>
#include <iostream>




using namespace std;

int fibo(int n)
{
	if (n == 0 || n == 1) return n;
	else return fibo(n - 1) + fibo(n - 2);
}


int main()
{
	int n;
	cout << "N=";
	cin >> n;

		cout << "Fibonachi = " << fibo(n) << endl;


	return 0;
}
