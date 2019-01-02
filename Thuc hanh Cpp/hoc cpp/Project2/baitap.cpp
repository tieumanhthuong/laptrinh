#include<iostream>
#include<math.h>

using namespace std;

void xuat_man_hinh();
void chan_le();
void pheptoan();
void tim_max();
void hinh_chu_nhat();
void hinh_tron();
void pt_bac1();
void pt_bac2();
void tam_giac();

/* GIAI THICH TRONG BAI LAM !!!
VD:1 so float la 1.23456789
roundf() : Ham lam tron gan nhat =  1.23
ceilf() : Ham lam tron len  = 1.24
floorf() : Ham lam tron xuong = 1.23
// roundf,ceilf,floorf ko dung dc vi ket qua ko dung
%0.2f //de lay 2 so cuoi sau dau phay.
system("cls");// La ham xoa man hinh dc khai bao thu vien <iostream>
sqrt(n); // La ham tinh can bac 2 dc khai bao trong thu vien <math.h>
*/

int main() {

	xuat_man_hinh();
	chan_le();
	pheptoan();
	tim_max();
	hinh_chu_nhat();
	hinh_tron();
	pt_bac1();
	pt_bac2();
	tam_giac();

	return 0;
}

void xuat_man_hinh() {
	cout << "\tXUAT CHU RA MAN HINH" << endl;
	cout << "Ngon ngu lap trinh C" << endl;
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void chan_le() {
	cout << "\tTIM CHAN LE CUA 1 SO N" << endl;
	int n;
	cout << "Nhap vao so n: " << endl;
	cin >> n;
	if (n % 2 == 0) cout << "So " << n << " La so Chan" << endl;
	else cout << "So " <<n << " La so Le" << endl;
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void pheptoan() {
	cout << "\tCONG TRU NHAN CHIA 2 SO A & B" << endl;
	int a, b;
	cout << "Nhap vao 2 so a va b: " << endl;
	cin >> a >> b;

	cout << "Tong cua 2 so a va b la " << a + b << endl;
	cout << "Hieu cua 2 so a va b la " << a - b << endl;
	cout << "Tich cua 2 so a va b la " << a * b << endl;
	printf("Thuong cua 2 so a va b la %0.2f\n", float(a) / b);
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void tim_max() {
	cout << "\tTIM MAX CUA 4 SO A B C D" << endl;
	int a, b, c, d;
	int m, m1, m2;

	cout << " Nhap vao 4 so a b c d: " << endl;
	cin >> a >> b >> c >> d;
	if (a > b) m1 = a;
	else m1 = b;
	if (c > d) m2 = c;
	else m2 = d;
	if (m1 > m2) m = m1;
	else m = m2;
	if ((a == b) && (b == c) && (c == d))
		cout << "Khong co so lon nhat" << endl;
	else cout << "So lon nhat la " << m << endl;
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void hinh_chu_nhat() {
	cout << "\tTINH CHU VI & DIEN TICH HINH CHU NHAT" << endl;
	float a, b;
	cout << "Nhap vao 2 canh hinh chu nhat dxr: " << endl;
	cin >> a >> b;
	cout << "Chu vi cua hinh chu nhat la " << (a + b) * 2 << endl;
	cout << "Dien tich hinh chu nhat la " << a * b << endl;
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void hinh_tron() {
	cout << "\tTINH CHU VI & DIEN TICH HINH TRON" << endl;
	int r;
	cout << "Nhap vao ban kinh duong tron r: " << endl;
	cin >> r;
	printf("Chu vi cua hinh tron la %0.2f\n", 2 * r * 3.14);
	printf("Dien tich cua hinh tron la %0.2f\n", r*r*3.14);
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void pt_bac1() {
	cout << "\tGIAI PHUONG TRINH BAC 1" << endl;
	float a, b;
	cout << "Nhap vao 2 he so a va b trong pt ax+b=0 " << endl;
	cin >> a >> b;
	if (a == 0)
		cout << "Phuong trinh vo nghiem" << endl;
	else printf("Phuong trinh co 1 nghiem la %0.2f\n",(-b) / a);
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void pt_bac2() {
	cout << "\tGIAI PHUONG TRINH BAC 2" << endl;
	float a, b, c, delta;
	do {
		cout << "Nhap vao 3 he so a != 0 , b va c trong pt aX^2+bX+c=0 " << endl;
		cin >> a >> b >> c;
		if (a == 0)
			cout << "Vui long nhap lai !";
	} while (a == 0);
	delta = (b * b) - (4 * a*c);
	if (delta < 0)
		cout << "Phuong trinh bac 2 vo nghiem" << endl;
	else if (delta == 0)
		printf("Phuong trinh bac 2 co 1 nghiem kep x = %0.2f\n", (-b) / (2 * a));
	else {
		cout << "Phuong trinh bac 2 co 2 nghiem phan biet la " << endl;
		printf("x1 = %0.2f\n", ((-b) + sqrt(delta)) / (2 * a));
		printf("x2 = %0.2f\n", ((-b) - sqrt(delta)) / (2 * a));
		}
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void tam_giac() {
	cout << "\tXAC DINH 1 TAM GIAC" << endl;
	float a, b, c;
	do
	{
		cout << "Nhap vao 3 canh cua 1 tam giac" << endl;
		cin >> a >> b >> c;
		if ((a < 0) || (b < 0) || (c < 0))
			cout << "Vui long nhap lai ! " << endl;
	} 
	while ((a < 0) || (b < 0) || (c < 0));
	if ((a + b > c) || (b + c > a) || (a + c > b)) 
		{
		cout << "Day la 3 canh cua 1 tam giac" << endl;
		if ((a == b) || (b == c) || (a == c))
			cout << "Day la tam giac can" << endl;
		else if ((a == b) && (b == c))
			cout << "Day la tam giac deu" << endl;
		else if ((a*a == b * b + c * c) || (b*b == a * a + c * c) || (c*c == a * a + b * b))
			cout << "Day la tam gac vuong" << endl;
		else
			cout << "Day la tam giac thuong" << endl;
		}
	else
		cout << "Day khong phai la 3 canh cua 1 tam giac" << endl;
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}