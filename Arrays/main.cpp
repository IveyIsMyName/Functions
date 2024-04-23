#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n-------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Min(int arr[], const int n);
double Min(double arr[], const int n);
char Min(char arr[], const int n);

int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Min(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
double Max(double arr[], const int n);
char Max(char arr[], const int n);

int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Max(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int shift, int arr[], const int n);
void shiftLeft(int shift, double arr[], const int n);
void shiftLeft(int shift, char arr[], const int n);

void shiftLeft(int shift, int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftRight(int shift, int arr[], const int n);
void shiftRight(int shift, double arr[], const int n);
void shiftRight(int shift, char arr[], const int n);

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
			arr[i] = rand() % 1000;
			arr[i] /= 100;
		}
	}
	void FillRand(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
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
				arr[i][j] = rand() % 100;
			}
		}
	}
	void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 100;
			}
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
	void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
		cout << endl;
		}
		cout << endl;
	}
	void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		cout << endl;
	}
	void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
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
	void Sort(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					double buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}
	void Sort(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
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
	void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int pass = 0; pass <= (ROWS * COLS); pass++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS-1; j++)
				{
					if (arr[i][j+1] < arr[i][j])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][j+1];
						arr[i][j+1] = temp;
					}
				}
			}
			for (int i = 0; i < COLS; i++)
			{
				for (int j = 0; j < ROWS-1; j++)
				{
					if (arr[i][j+1] < arr[i][j])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][j+1];
						arr[i][j+1] = temp;
					}

				}
			}
			
		}
	}
	void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int pass = 0; pass <= (ROWS * COLS); pass++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS - 1; j++)
				{
					if (arr[i][j + 1] < arr[i][j])
					{
						double temp = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = temp;
					}
				}
			}
			for (int i = 0; i < COLS; i++)
			{
				for (int j = 0; j < ROWS - 1; j++)
				{
					if (arr[i][j + 1] < arr[i][j])
					{
						double temp = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = temp;
					}

				}
			}

		}
	}
	void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int pass = 0; pass <= (ROWS * COLS); pass++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS - 1; j++)
				{
					if (arr[i][j + 1] < arr[i][j])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = temp;
					}
				}
			}
			for (int i = 0; i < COLS; i++)
			{
				for (int j = 0; j < ROWS - 1; j++)
				{
					if (arr[i][j + 1] < arr[i][j])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = temp;
					}

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
	int Sum(char arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += arr[i][j];
			}
		}
		return sum;
	}
	double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		double sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += arr[i][j];
			}
		}
		return sum;
	}
	char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += arr[i][j];
			}
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
	double Avg(char arr[], const int n)
	{
		return Sum(arr, n) / n;
	}
	double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	}
	double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	}
	char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
	int Min(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int min = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] < min)min = arr[i][j];
			}
		}
		return min;
	}
	double Min(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		double max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
		}
		return max;
	}
	char Min(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
		}
		return max;
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
	int Max(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
		}
		return max;
	}
	double Max(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		double max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
		}
		return max;
	}
	char Max(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int max = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
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
	