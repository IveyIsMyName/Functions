#include "stdafx.h"
#include "constants.h"

#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	int shift;

	cout << "Исходный массив: ";
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Отсортированный массив: ";
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое значение: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение: " << Min(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение: " << Max(i_arr, I_SIZE) << endl;
	//cout << "Введите количество сдвигов вправо: "; cin >> shift;
	//shiftLeft(shift, arr, n);
	//Print(arr, n);
	//cout << "Введите количество сдвигов влево: "; cin >> shift;
	//shiftRight(shift, arr, n);
	//Print(arr, n);
	
	cout << delimiter << endl;
	
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << Min(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << Max(d_arr, D_SIZE) << endl;
	/*cout << "Введите количество сдвигов вправо: "; cin >> shift;
	shiftLeft(shift, d_arr, I_SIZE);
	Print(d_arr, I_SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> shift;
	shiftRight(shift, d_arr, I_SIZE);
	Print(d_arr, I_SIZE);*/
	
	cout << delimiter << endl;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое значение: " << Avg(c_arr, C_SIZE) << endl;
	
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов: " << Sum(i_arr_2, ROWS, COLS)<<endl;
	cout << "Среднее-арифметическое значение: " << Avg(i_arr_2, ROWS, COLS)<<endl;
	cout << "Минимальное значение: " << Min(i_arr_2, ROWS, COLS)<<endl;
	cout << "Максимальное значение: " << Max(i_arr_2, ROWS, COLS)<<endl;
}

	