#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
const char* Sum(char arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Min(T arr[], const int n);
template<typename T>T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Max(T arr[], const int n);
template<typename T>T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(int shift, T arr[], const int n);
template<typename T>void shiftLeft(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftRight(int shift, T arr[], const int n);
template<typename T>void shiftRight(int shift, T arr[ROWS][COLS], const int ROWS, const int COLS);


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
	shiftRight(shift, arr, n);*/
	Print(arr, n);

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
	void FillRand(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand();
		}
	}
	void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 100;
			}
		}
	}
	void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 10000;
				arr[i][j] /= 100;
			}
		}
	}
	void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 10000;
				arr[i][j] /= 100;
			}
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
	template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j]<< tab;
			}
			cout << endl;
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
	template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = i; k < ROWS; k++)
				{
					for (int l = k == i ? j + 1 : 0; l < COLS; l++)
					{
						if (arr[k][l] < arr[i][j])
						{
							T buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
						}
					}
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
	const char* Sum(char arr[], const int n)
	{
		return "Невозможно вычислить сумму для типа данных 'char'";
	}
	template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		T sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += arr[i][j];
			}
		}
		return sum;
	}
	template<typename T>double Avg(T arr[], const int n)
	{
		return (double)Sum(arr,n) / n;
	}
	const char* Avg(char arr[], const int n)
	{
		return "Невозможно вычислить среднее-арфиметическое для типа данных 'char'";
	}
	template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
	template<typename T>T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		T min = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] < min)min = arr[i][j];
			}
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
	template<typename T>T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		T max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
		}
		return max;
	}
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