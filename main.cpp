#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "\t\t\t��������� ����� ��������� �������� ���������\n";
	cout << endl;
	cout << "������� 1 �����:� ";
	cin >> a;
	if (a == 0)
	{
		cout << "error.null";
		return 0;
	}
	cout << endl;
	cout << "������� 2 �����:� ";
	cin >> b;
	cout << endl;
	if (a > b)
	{
		cout << "������ ����� ������" << endl;
	}
	else if (a < b)
	{
		cout << "������ ����� ������" << endl;
	}
	else
	{
		cout << "��� ����� �����" << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}