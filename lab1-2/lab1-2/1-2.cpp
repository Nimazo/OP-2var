#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");     //���������� ������� �������
	float V, S, H;                    //������������ ��� ����������
	cout << "������� ����� �������� "; //������� �� �����
	cin >> V;                         //������������ ������ �����
	cout << "������� ������� ��������� ";
	cin >> S;
	H = V / S;                         // ���������������, ����������
	cout << "������ ����� "<< H << "\n"; //\n - ��������� �� ����� ������ �� ����������
	system("pause");
}
