#include<iostream>
using namespace std;

int max(int a, int b);

void maxix(int a, int b, int &m);
int main() {
	int a, b, m = 0;
	cout << "Nhap 2 so a , b:" << endl;
	cin >> a >> b;
	//cout << max(4, 3) << endl;
	maxix(a, b, m);
	cout << "So lon nhat la:" << m << endl;
	system("pause");
	return 0;
}
int max(int a, int b) {
	if (a > b) return a;
	return b;
}
void maxix(int a, int b, int &m) {
	if (a > b) m = a;
	else m = b;
}