#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");     //���������� ������� �������
	float a, b, c;                    //������������ ��� ����������
	cout << "������� a = ";           //������� �� �����
	cin >> a;                         //������������ ������ �����
	cout << "������� b = ";
	cin >> b;
	cout << "������� c = ";
	cin >> c;
	cout << "����� �������� � �������� (1;3): \n";
	if ((a > 1) && (a < 3))          //�������
	{
		cout << "a = " << a <<"\n";         //���� �������
	}
	if ((b > 1) && (b < 3))
	{
		cout << "b = " << b << "\n";
	}
	if ((c > 1) && (c < 3))
	{
		cout << "c = " << c << "\n";
	}
	system("pause");        //����� ��������� �� ���������
}
