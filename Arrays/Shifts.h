#pragma once
#include"Constants.h"

template<typename T>void shiftLeft(int shift, T arr[], const int n);
template<typename T>void shiftLeft(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftRight(int shift, T arr[], const int n);
template<typename T>void shiftRight(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(int shift, T arr[], const int n)
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
template<typename T>void shiftLeft(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS)
{

}
template<typename T>void shiftRight(int shift, T arr[], const int n)
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
template<typename T>void shiftRight(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS)
{

}