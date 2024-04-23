#include"Shift.h"

void shiftLeft(int shift, int arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftLeft(int shift, double arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		double temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftLeft(int shift, char arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftLeft(int shift, int arr[ROWS][COLS], const int ROWS, const int COLS)
{}
void shiftRight(int shift, int arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftRight(int shift, double arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		double temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftRight(int shift, char arr[], const int n)
{
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
