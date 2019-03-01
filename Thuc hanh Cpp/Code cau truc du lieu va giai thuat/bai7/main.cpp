#include<iostream>
using namespace std;

/* Dùng đệ quy chuyển cơ số 10 sang cơ số 2*/
void H10ToH2(int n){
    if(n>0){
        int sd=n%2;
        n=n/2;
        H10ToH2(n);
        cout<<sd;
    }
}
int main(int argc, char const *argv[])
{
    int n=1234;
    H10ToH2(n);
    return 0;
}
