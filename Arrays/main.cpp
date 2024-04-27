#include "stdafx.h"
#include "Constants.h"

#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shifts.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift;

	cout << delimiter << "Int array" << delimiter;
	
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое значение: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << Min(arr, n) << endl;
	cout << "Максимальное значение: " << Max(arr, n) << endl;
	/*cout << "Введите количество сдвигов вправо: "; cin >> shift;
	shiftLeft(shift, arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов влево: "; cin >> shift;
	shiftRight(shift, arr, n);
	Print(arr, n);*/

	cout << delimiter << "Double array"<<delimiter;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << Min(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << Max(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << "Char array"<< delimiter;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение: " << Min(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение: " << Max(c_arr, C_SIZE) << endl;

	cout << delimiter << "2D int array" << delimiter;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << Max(i_arr_2, ROWS, COLS) << endl;
}	
