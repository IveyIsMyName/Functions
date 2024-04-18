#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
int Min(int arr[], const int n);
double Min(double arr[], const int n);
char Min(char arr[], const int n);
int Max(int arr[], const int n);
double Max(double arr[], const int n);
char Max(char arr[], const int n);
void shiftLeft(int shift, int arr[], const int n);
void shiftLeft(int shift, double arr[], const int n);
void shiftLeft(int shift, char arr[], const int n);
void shiftRight(int shift, int arr[], const int n);
void shiftRight(int shift, double arr[], const int n);
void shiftRight(int shift, char arr[], const int n);
void FillChar(char arr[], const int n); //функция для массива с символами

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
	//cout << "Введите количество сдвигов вправо: "; cin >> shift;
	//shiftLeft(shift, arr, n);
	//Print(arr, n);
	//cout << "Введите количество сдвигов влево: "; cin >> shift;
	//shiftRight(shift, arr, n);
	//Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << Min(brr, SIZE) << endl;
	cout << "Максимальное значение: " << Max(brr, SIZE) << endl;
	cout << "Введите количество сдвигов вправо: "; cin >> shift;
	shiftLeft(shift, brr, n);
	Print(brr, n);
	cout << "Введите количество сдвигов влево: "; cin >> shift;
	shiftRight(shift, brr, n);
	Print(brr, n);
	//Заполнение массива символами:
	char crr[SIZE];
	FillChar(crr, SIZE);
	Print(crr, SIZE);
}

	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100+1;
		}
	}
	void FillRand(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void FillRand(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void Print(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	void Print(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	void Print(char arr[], const int n)
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
	double Sum(double arr[], const int n)
	{
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	char Sum(char arr[], const int n)
	{
		char sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Avg(int arr[], const int n)
	{
		return (double)Sum(arr,n) / n;
	}
	double Avg(double arr[], const int n)
	{
		return Sum(arr, n) / n;
	}
	char Avg(char arr[], const int n)
	{
		return Sum(arr, n) / n;
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
	double Min(double arr[], const int n)
	{
		double min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (min > arr[i]) min = arr[i];
		}
		return min;
	}
	char Min(char arr[], const int n)
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
	double Max(double arr[], const int n)
	{
		double max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (max < arr[i]) max = arr[i];
		}
		return max;
	}
	char Max(char arr[], const int n)
	{
		char max = arr[0];
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
			char temp = arr[n - 1];
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
			char temp = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = temp;
		}
	}
	void FillChar(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = 'A'+i;
		}
	}