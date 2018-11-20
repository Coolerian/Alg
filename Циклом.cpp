	//время работы: n*logn

#include "stdafx.h"
#include <stdio.h>
#include <iostream>




using namespace std;



int main()
{
int n;
int fib1=0;
int fib2=1;
int fib_sum;
cout << "N=";
cin >> n;
int i=0;
	while (i<n){
	fib_sum = fib2 + fib1;
	    fib1 = fib2;
  	  fib2 = fib_sum;
	    i++;
	}
	cout << fib_sum;
	return 0;
}
