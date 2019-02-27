#include <iostream>
using namespace std;
//hàm tìm ước chung lớn nhất dùng đệ quy đuôi!!!
int gcd(int m, int n){
    int r;
    if(m<n)
        return gcd(n,m);
    r=m%n;
    if(r==0)
        return n;
    else 
        return gcd(n,r);
}
int main(int argc, char const *argv[])
{
    int m =34,n=26;
    int kq=gcd(m,n);
    cout<<kq;
    return 0;
}
