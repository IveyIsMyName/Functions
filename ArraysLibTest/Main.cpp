#include <iostream>
using namespace std;
#include<FillRand.h>
#include<Print.h>

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}