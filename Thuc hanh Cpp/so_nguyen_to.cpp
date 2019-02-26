#include <iostream>
#include <math.h>

using namespace std;

bool soNguyenTo(int);
bool soNguyenTo(int soA) // hàm bool trả về true/false
{
	if (soA < 2) // Nếu số A nhỏ hơn 2
	{
		return false;// trả về false
	}
	else if (soA>2)// Nếu số A lớn hơn 2
	{
		if (soA % 2 == 0)  // Xét xem A có chia hết cho 2 không?
		{
			return false;// Nếu chia hết, return false.
		}
		for (int i = 3; i < sqrt((float)soA); i += 2)  // xét từ 3 đến căn bậc 2 của số A
		{
			if (soA%i == 0)  // nếu A chia hết cho một số nào đó trong đoạn này
			{
				return false;// trả về kết quả sai
			}
		}
	}
	return true;// sau tất cả các chỗ trên, nó mà không sai thì cuối cùng nó đúng :3
}
int main(int argc, char ** argv)
{
	int n; // khai bao so kiem tra la so nguyen
	cout << "Nhap so can kiem tra?!" << endl;
	cin >> n; // nhap vao so nguyen tu ban phim
	if (soNguyenTo(n) == true)
	{
		cout << "So " << n << " la so nguyen to!!!!";
	}
	else
	{
		cout << "So " << n << " khong phai nguyen to!!!!";
	}
	getchar();
	return 0;
}