#include <iostream>
using namespace std;
//đệ quy nhị phân là dạng đệ quy gọi 2 lần chính nó!
int fib(int n){
    if(n<=2)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main(int argc, char const *argv[])
{
    int n=7;
    int f=fib(n);
    cout<<f;
    return 0;
}
