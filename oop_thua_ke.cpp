/* ============ TÍNH KẾ THỪA ============  
KẾ THỪA LÀ GÌ ?
- Sự trao đổi thông tin từ thế hệ này sang thế hệ khác
<=> sự trao đổi thông tin từ lớp A sang lớp B
- Lớp cha mà có lớp con kế thừa lại thì các thuộc tính của lớp cha sẽ để ở tầm vực PROTECTED
+ protected: Khi ta khai báo các thuộc tính hay phương thức với từ khóa này thì nó sẽ có phạm vi hoạt động bên trong lớp đó và ở các lớp con kế thừa từ nó

==> KẾ THỪA LÀ CHÚNG TA SẼ ĐI KIẾM NHỮNG CÁI GÌ "CHUNG" - SAU ĐÓ ĐEM NHỮNG CÁI " CHUNG " ĐÓ RA TẠO THÀNH 1 CÁI CLASS(LỚP) 
==> CLASS CHA

- Khi 1 lớp con kế thừa từ lớp cha ==> thằng cha có cái gì thì thằng con cũng có cái đó

LỢI ÍCH KHI DÙNG KẾ THỪA 
- Tránh tình trạng dư thừa dữ liệu
*/

//=================== CODE =================== 
#include<iostream>
using namespace std;
#include<string>

/*
- Trong 1 công ty có 3 loại nhân viên:
+ Nhân viên sản xuất: họ tên, mã số, ngày sinh, quê quán, số sản phẩm
+ Nhân viên công nhật: họ tên, mã số, ngày sinh, quê quán, số ngày làm công
+ Nhân viên quản lí: họ tên, mã số, ngày sinh, quê quán, hệ số lương

*/

// khai báo lớp cha - NhanVien
class NhanVien
{
protected:
	string hoten;
	string maso;
	string ngaysinh; // dd/mm/yyyy
	string quequan;
public:
	void Input();
	void Output();
};

// khai báo class nhân viên sản xuất
class NhanVienSanXuat : public NhanVien
{
private:
	
	int sosanpham;
public:
	void Input();
	void Output();
};

// khai báo class nhân viên công nhật
class NhanVienCongNhat : public NhanVien
{
private:
	int songaylamcong;

public:
	void Input();
	void Output();
};

// khai báo class nhân viên quản lí
class NhanVienQuanLi : public NhanVien
{
private:
	float hesoluong;

public:
	void Input();
	void Output();
};

int main()
{

	system("pause");
	return 0;
}