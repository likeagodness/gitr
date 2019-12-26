#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "что хотите сделать?" << endl;
	cout << "введите 1 если хотите сложить" << endl << "введите 2 если хотите вычесть" << endl;
	cout << "введите 3 если хотите умножить" << endl << "введите 4 если хотите поделить" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		cout << "Введите слагаемые" << endl;
		cin >> c >> d;
		cout << MySum(c, d) << endl;
		break;
	case 2:
		cout << "Введите уменьшаемое и вычитаемое" << endl;
		cin >> c >> d;

		cout  << MySub(c, d) << endl;
		break;
	case 3:
		cout << "Введите первый и второй множитель" << endl;
		cin >> c >> d;

		cout << MyMul(c, d) << endl;
		break;
	case 4:
		cout << "Введите делимое и делитель" << endl;
		cin >> c >> d;
		cout << MyDiv(c, d) << endl;
		break;

	}
	system("pause");
	return 0;
}