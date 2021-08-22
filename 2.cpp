//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void main() {
//	srand(time(NULL));
//	setlocale(0, "");
//	const int COL = 9;
//	int size[COL];
//
//	for (int i = 0; i < COL; i++) cout << (size[i] = rand()) << "\t";
//  cout << "\n\n";
//	int q = 9;
//	for (int i = 0; i < COL; i++) {
//		for (int j = 0; j < 8; j++) {
//			if (size[j] > size[j + 1]) {
//				int x = size[j];
//				size[j] = size[j + 1];
//				size[j + 1] = x;
//			}
//		}
//	}
//	for (int i = 0; i < COL; i++) cout << size[i] << "\t";
//}