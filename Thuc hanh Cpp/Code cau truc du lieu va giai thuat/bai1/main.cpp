#include <iostream>
using namespace std;
//hàm tính giai thừa sử dụng đệ quy
int factorial(int n){
    if (n==0)
        return 1;
    return n*factorial(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n ;
    int kq = factorial(n);
    cout<<n<<"! = "<<kq;
    return 0;
}
