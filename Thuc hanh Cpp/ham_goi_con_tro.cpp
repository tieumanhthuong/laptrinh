#include<iostream>


using namespace std;

void hoan_vi(int *a,int *b);

int main() {

	int a, b;
	
	cout << "Nhap 2 so a va b" << endl;
	cin >> a >> b;
	cout << "Gia tri ban dau cua a va b la : " << a << " va " << b << endl;
	hoan_vi(&a,&b);
	cout << "Gia tri sau khi hoan vi cua a va b la : " << a << " va " << b << endl;
	getchar();
	return 0;

}


void hoan_vi(int *a,int *b){
	int tam;
	tam = *a;
	*a = *b;
	*b = tam;
}