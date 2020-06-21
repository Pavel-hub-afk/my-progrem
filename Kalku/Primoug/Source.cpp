#include <iostream>
#include <locale>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "");
	//////////////////////////////

	int vs = 0, sh = 0;

	cout << "¬ведите высоту пр€моугольника: ";
	cin >> vs;
	cout << "¬ведите ширину пр€моугольника: ";
	cin >> sh;

	for (int i = 0; i < vs; i++) {
		for (int j = 0; j < sh; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 1;
}