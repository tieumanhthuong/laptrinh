#include <iostream>
using namespace std;

/*Nested Recursion
Đệ quy lồng là loại đệ quy gọi đệ quy vào đối số của hàm đệ quy*/

int ackerman(int m, int n){
    if(m==0)
        return n+1;
    else if(n==0)
        return ackerman(m-1,1);
    else 
        return ackerman(m-1,ackerman(m,n-1));
}
int main(int argc, char const *argv[])
{
    int kq=ackerman(2,1);
    cout<<kq;
    return 0;
}
