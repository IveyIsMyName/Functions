#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n, int sum = 0);
int Min(int arr[], const int n);
int Max(int arr[], const int n);
void shiftLeft(int shift, int arr[], const int n);
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
	cout << "Введите количество сдвигов вправо: "; cin >> shift;
	shiftLeft(shift, arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов влево: "; cin >> shift;
	shiftRight(shift, arr, n);
	Print(arr, n);
}

	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100+1;
		}
	}
	void Print(const int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	void Sort(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}
	int Sum(int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Avg( int arr[], const int n, int sum)
	{
		sum = Sum(arr, n);
		return (double) sum / n;
	}
	int Min(int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (min > arr[i]) min = arr[i];
		}
		return min;
	}
	int Max(int arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (max < arr[i]) max = arr[i];
		}
		return max;
	}
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