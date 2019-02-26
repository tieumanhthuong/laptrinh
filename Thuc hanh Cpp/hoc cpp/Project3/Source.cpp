#include<iostream>
#include<algorithm>

using namespace std;

void bai_1();
void bai_2();
void bai_3();
void bai_4();
void bai_5();
void bai_6();
void bai_7();
int ucln();
int bcnn();

int main() {
	int a,b;
	/*bai_1();
	bai_2();
	bai_3();
	bai_4();
	bai_5();
	bai_6();*/
	//bai_7();
	a = ucln();
	cout << a << endl;
	b = bcnn();
	cout << b << endl;
	system("pause");
	return 0;
}

void bai_1() {
	unsigned int n;
	cout << "Nhap vao mot so n " << endl;
	cin >> n;
	cout << "Cac so tu nhien chan nho hon " << n << " la: ";
	for (unsigned int i = 0; i < n; i++) {
		if (i % 2 == 0) cout << i << "  ";
	}
	cout << endl;
	cout << "Cac so tu nhien le nho hon " << n << " la: ";
	for (unsigned int i = 0; i < n; i++) {
		if (i % 2 != 0) cout << i << "  ";
	}
	cout << endl;
	system("pause");
	system("cls");
}
void bai_2() {
	/* S = 1 + 2 +...+n*/
	unsigned int n, sum = 0;
	cout << "Nhap 1 so n" << endl;
	cin >> n;
	for (unsigned int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "Tong cua n so la: " << sum << endl;
	system("pause");
	system("cls");
}
void bai_3() {
	/*S = 1 + (1/2) + (1/3) + ... + (1/n)*/
	unsigned int n;
	float sum = 0;
	cout << "Nhap vao n " << endl;
	cin >> n;
	for (unsigned int i = 1; i <= n; i++) {
		sum += (1 / float(i));

	}
	printf("Tong cua n so la %0.2f\n", sum);
	system("pause");
	system("cls");
}
void bai_4() {
	unsigned int n, s = 0, s1 = 0, s2 = 0;
	cout << "Nhap vao 1 so n" << endl;
	cin >> n;
	for (unsigned int i = 0; i <= n; i++) {
		s += i;
		if (s > n) s -= 
i;
		if (i % 2 != 0) {
			s1 += i;
			if (s1 > n) s1 -= i;
		}
		if (i % 2 == 0) {
			s2 += i;
			if (s2 > n) s2 -= i;
		}
	}
	cout << "Tong cua cac so tu nhien khong lon hon n la " << s << endl;
	cout << "Tong cua cac so tu nhien le khong lon hon n la " << s1 << endl;
	cout << "Tong cua cac so tu nhien chan khong lon hon n la " << s2 << endl;
	system("pause");
	system("cls");
}
void bai_5() {
	/*S=1 + 1.2 + 1.2.3 + .. + 1.2.3...n*/
	int n,sum = 0,tich = 1;
	do {
		cout << "Nhap vao 1 so n " << endl;
		cin >> n;
		if (n < 1) cout << "Vui long nhap lai so n"<<endl;
	} while (n < 1);
	for (int i = 1; i <= n; i++) {
		tich *= i;
		sum += tich;
		}

	cout << "Tong cua n so la " << sum << endl;
	system("pause");
	system("cls");

}
void bai_6() {
	/*
	Nhap vao so tu nhien n
	Tinh tong cac so tu nhien khong lon hon n va chia het cho 7*/

	unsigned int n,sum=0;
	cout << "Nhap vao so tu nhien n" << endl;
	cin >> n;
	for (unsigned int i = 0; i <= n; i++) {
		if ((i <= n) && (i % 7 == 0)) sum += i;
	}
	cout << "Tong cac so theo yeu cau de bai : " << sum << endl;
	system("pause");
	system("cls");
}
void bai_7() {
	/*
	Nhap vao so tu nhien n va liet ke cac uoc so cua no. Co bao nhieu uoc so ?*/
	unsigned int n,dem = 0;
	cout << "Nhap vao so tu nhien n " << endl;
	cin >> n;
	cout << "Cac uoc so cua " << n << " la " << endl;
	for (unsigned int i = 1; i <= n; i++) {
		if (n%i == 0) {
			cout << " " << i;
			dem += 1;
		}
	}
	cout << "\nSo " << n << " co " << dem << " uoc so!" << endl;
	system("pause");
	system("cls");
}
int ucln() {
	/*
	Tim uoc so chung lon nhat va boi so chung nho nhat
	cua 2 so nguyen duong a va b*/
	unsigned int a, b, bai_4;
	cout << "Nhap vao 2 so a va b " << endl;
	cin >> a >> b;
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la ";
	for (unsigned int i = a; i > 0; i--) {
		if (a%i == 0) {
			bai_4 = i; 
			for (unsigned int j = b; j > 0; j--) {
				if (b%j == 0) {
					if (bai_4 == j) return bai_4;
				}
			}
		}
	}
}
int bcnn() {
	unsigned int a, b, bcnn;
	cout << "Nhap vao 2 so a va b " << endl;
	cin >> a >> b;
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la ";
	for (unsigned int i = a;; i += a) {
		if (i%a == 0) bcnn = i; {
			for (unsigned int j = b;; j += b) {
				if (j%b == 0) {
					if (j%bcnn == 0) return j;
				}
			}
		}

	}
}