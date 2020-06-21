#include <iostream>
#include <locale>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "");

	////////////////////////////////// 

	float a, b; 
	float c = 0;
	char f;
	int p = 0;

	

	while (p != 2)
	{
		cout << "1 - калькулятор." << endl << "2 - выход." << endl;
		cin >> p;

		if (p == 1) {
			cout << "Возмодные действия: +, -, *, /." << endl << "===========================" << endl;
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите действие: ";
			cin >> f;
			cout << "Введите второе число: ";
			cin >> b;

			switch (f)
			{
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '*':
				c = a * b;
				break;
			case '/':
				c = a / b;
				break;
			default:
				cout << "Неизвестное значение!" << endl;
				break;
			}

			cout << "Результат: " << c << endl;
		}
		if (p == 2) {
			return 1;
		}

	}
	return 0;
}