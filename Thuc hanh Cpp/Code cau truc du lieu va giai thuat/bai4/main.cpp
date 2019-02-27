#include<iostream>
using namespace std;

/*Exponential recursion
Đệ quy đa tuyến là dạng trong một hàm nào đó mà có 
vòng lặp gọi lại đệ quy của chính nó*/
void print_array(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}
//sắp xếp tăng dần giá trị trong mảng
void print_permutations(int arr[], int n, int i){
    int j,swap;
    print_array(arr,n);
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
        }
        print_permutations(arr,n,i+1);
    }
}
int main(int argc, char **argv)
{
    int M[3];
    M[0]=10;
    M[1]=2;
    M[2]=5;
    print_permutations(M,3,0);
    return 0;
}
