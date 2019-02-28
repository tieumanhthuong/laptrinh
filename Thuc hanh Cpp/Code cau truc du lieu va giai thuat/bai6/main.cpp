/*Matual recrusion
Đệ quy tương hỗ*/
#include<iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n){
    if(n==0)
        return true;
    else
        return isOdd(n-1);
    
}
bool isOdd(int n){
    return !isEven(n);
}
int main(int argc, char const *argv[])
{
    int n1=9;
    bool kq=isEven(n1);
    if(kq==true)
        cout<<n1<<" la so chan";
    else
        cout<<n1<<" la so le";
    return 0;
}
