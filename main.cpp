#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "\t\t\t—равнение чисел использу€ оператор ветвлени€\n";
	cout << endl;
	cout << "¬ведите 1 число:† ";
	cin >> a;
	if (a == 0)
	{
		cout << "error.null";
		return 0;
	}
	cout << endl;
	cout << "¬ведите 2 число:† ";
	cin >> b;
	cout << endl;
	if (a > b)
	{
		cout << "ѕервое число больше" << endl;
	}
	else if (a < b)
	{
		cout << "ѕервое число меньше" << endl;
	}
	else
	{
		cout << "Ёти числа равны" << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}