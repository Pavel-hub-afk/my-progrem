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
		cout << "1 - �����������." << endl << "2 - �����." << endl;
		cin >> p;

		if (p == 1) {
			cout << "��������� ��������: +, -, *, /." << endl << "===========================" << endl;
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ��������: ";
			cin >> f;
			cout << "������� ������ �����: ";
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
				cout << "����������� ��������!" << endl;
				break;
			}

			cout << "���������: " << c << endl;
		}
		if (p == 2) {
			return 1;
		}

	}
	return 0;
}