// Geometry
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7

#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE  (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE   (char)196
#define VERTICAL_LINE     (char)179
#define WHITE_BOX         (char)219
#define BLACK_BOX         ' '
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_0
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TASK_0

#ifdef TASK_1
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TASK_2

#ifdef TASK_3
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
		for (int k = -1; k < i; k++)
		{
			cout << " ";
		}
	}
#endif // TASK_3

#ifdef TASK_4
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TASK_4

#ifdef TASK_5
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // TASK_5

#ifdef TASK_6
	int n;
	cout << "Введите размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif // TASK_6

#ifdef TASK_7
	int n;
	cout << "Введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else if (i % 2 == j % 2 ? cout << WHITE_BOX << WHITE_BOX : cout << BLACK_BOX << BLACK_BOX);
		}
		cout << endl;
	}
#endif // TASK_7
}