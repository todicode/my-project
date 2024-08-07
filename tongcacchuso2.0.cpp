#include <iostream>
#include <cmath>
//ting tong cac chu so nhap vao roi kiem tra xem tong do co phai so nguyen to hay khong
using namespace std;
int tong(int n){
    int sum = 0;
    while (n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
bool nguyento(int n){
    for (int i=2;i<=n-1; i++){
            if (n%i==0)
                    return false;
        }
        return n>=2;
    }
int main(){
    int i;
    cout << "type i: ";
    cin>> i;
    int Sum = tong(i);
    if (nguyento(Sum)){
        cout <<"tong cac chu so la mot so nguyen to";
    }else{
        cout <<"tong cac chu so khong phai la mot so nguyen to";
    }
}
