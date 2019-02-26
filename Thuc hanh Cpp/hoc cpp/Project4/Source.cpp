#include<iostream>

using namespace std;

void bai_1();
void bai_2();

int main() {
	bai_1();
	bai_2();
	return 0;

}
void bai_1() {
	int m, n;
	cout << "Nhap vao 2 so m va n " << endl;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}
void bai_2() {
	int m, n;
	cout << "Nhap vao 2 so m va n " << endl;
	cin >> m >> n;
	for (int i = 0; i < n; i += n-1) {
		for (int j = 0; j < m; j += m-1) {
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}