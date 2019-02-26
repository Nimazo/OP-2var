#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");     //Подключаем русские символы
	float V, S, H;                    //вещественный тип переменных
	cout << "Введите объём цилиндра "; //выводит на экран
	cin >> V;                         //Пользователь вводит число
	cout << "Введите площадь основания ";
	cin >> S;
	H = V / S;                         // непосредственно, вычисление
	cout << "Высота равна "<< H << "\n"; //\n - перенести на новую строку всё дальнейшее
	system("pause");
}
