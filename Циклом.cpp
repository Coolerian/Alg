//время работы: n*logn

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

	for (int i = 1; i <= n; i++)  
		cout << "Fibonachi = " << fibo(i) << endl;


	return 0;
}
