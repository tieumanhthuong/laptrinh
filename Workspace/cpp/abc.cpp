#include <iostream>

using namespace std;

void passs(string pass);
float tinhtoan(int a,int b,int sel);

int main()
{
	passs("le");
	cout<<"CHUONG TRINH TINH TOAN +-*/"<<endl;
	cout<<"Chon 1: + "<<endl;
	cout<<"Chon 2: - "<<endl;
	cout<<"Chon 3: * "<<endl;
	cout<<"Chon 4: / "<<endl;
	int select,so_a,so_b;
	cout<<"Phep tinh ban muon thuc hien :"<<endl;
	cin>>select;
	cout<<"Nhap vao 2 so a va b :"<<endl;
	cin>>so_a>>so_b;
	cout<<"Ket qua tinh toan la: "<< tinhtoan(so_a,so_b,select) <<endl;
	getchar();
	return 0;
}

void passs(string pass)
{
	string passw;
	do
	{
		cout<<" Enter password !"<<endl<<"/>";
		getline(cin,passw);
		if (passw == pass) 
			{
			cout<<" Welcome !"<<endl;
			break;
			}
		else cout<<" Wrong password! Repeat again! "<<endl;
	}
	while (1);
}
float tinhtoan(int a,int b,int sel)
{
	switch(sel){
		case 1 :{
					return a + b;
					break;
				}
		case 2 :{
					return a - b;
					break;
				}
		case 3 :{
					return a * b;
					break;
				}
		case 4 :{
					return (float)a / b;
					break;
				}
		default : {
				cout<<"Vui long chon lai!";
				return 9999;
				}
	}
}