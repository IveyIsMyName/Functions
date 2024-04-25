#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

template<typename T>void Print(T arr[], const int n);

template<typename T>void Sort(T arr[], const int n);

template<typename T>T Sum(T arr[], const int n);

template<typename T>double Avg(T arr[], const int n);

template<typename T>T Min(T arr[], const int n);

template<typename T>T Max(T arr[], const int n);

template<typename T>void shiftLeft(T shift, T arr[], const int n);
void shiftRight(int shift, int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift;

	cout << "Исходный массив: ";
	FillRand(arr, n);
	Print(arr, n);
	cout << "Отсортированный массив: ";
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
	shiftRight(shift, arr, n);*/
	Print(arr, n);
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

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);

}

	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void FillRand(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 10000;
			arr[i] /= 100;
		}
	}
	template<typename T>void Print(T arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	template<typename T>void Sort(T arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					T buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}
	template<typename T>T Sum(T arr[], const int n)
	{
		T sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	template<typename T>double Avg(T arr[], const int n)
	{
		return (double)Sum(arr,n) / n;
	}
	template<typename T>T Min(T arr[], const int n)
	{
		T min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (min > arr[i]) min = arr[i];
		}
		return min;
	}
	template<typename T>T Max(T arr[], const int n)
	{
		T max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (max < arr[i]) max = arr[i];
		}
		return max;
	}
	template<typename T>void shiftLeft(T shift, T arr[], const int n)
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