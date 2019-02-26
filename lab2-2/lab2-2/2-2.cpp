#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");     //Подключаем русские символы
	float a, b, c;                    //вещественный тип переменных
	cout << "Введите a = ";           //выводит на экран
	cin >> a;                         //Пользователь вводит число
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите c = ";
	cin >> c;
	cout << "Точки входящие в интервал (1;3): \n";
	if ((a > 1) && (a < 3))          //условие
	{
		cout << "a = " << a <<"\n";         //тело условия
	}
	if ((b > 1) && (b < 3))
	{
		cout << "b = " << b << "\n";
	}
	if ((c > 1) && (c < 3))
	{
		cout << "c = " << c << "\n";
	}
	system("pause");        //чтобы программа не закрылась
}
