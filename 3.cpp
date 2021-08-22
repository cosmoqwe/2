#include <iostream>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	setlocale(0, "");
	const int Q = 9;
	int b[Q];
	for (int i = 0; i < Q; i++) cout << (b[i] = rand() % 180) << "\t\n\n";
	int d1, d2;
	cout << "Выберите 2-ва радиуса(которые находятся друг возле друга) - >" << endl;
	cin >> d1 >> d2;
	int i = 0;
	for (i; b[i] != d1; i++);
		for (int q = 0; q < i ; i--) {
			int x = b[i];
			b[i] = b[i - 1];
			b[i - 1] = x;
		}
	for (int i = 0; i < Q; i++) cout << endl << b[i] << "\t\n\n";
}