#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "Выберите операцию" << endl;
	cout << "1. Сложить" << endl << "2. Вычесть" << endl;
	cout << "3. Умножить" << endl << "4. Деление" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		cout << "введите a и b" << endl;
		cin >> c >> d;
		cout << MySum(c, d) << endl;
		break;
	case 2:
		cout << "введите a и b" << endl;
		cin >> c >> d;

		cout  << MySub(c, d) << endl;
		break;
	case 3:
		cout << "введите a и b" << endl;
		cin >> c >> d;

		cout << MyMul(c, d) << endl;
		break;
	case 4:
		cout << "введите a и b" << endl;
		cin >> c >> d;
		cout << MyDiv(c, d) << endl;
		break;

	}
	system("pause");
	return 0;
}
