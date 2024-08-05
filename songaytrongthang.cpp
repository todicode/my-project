#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout << "hay nhap thang trong nam: ";
cin >> n;
    if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        cout << "thang nay co 31 ngay !";
    } else if (n==4 || n==6 || n==9 || n==11) {
        cout << "thang nay co 30 ngay !";
} else if (n==2){
        cout << "thang nay co 28 ngay hoac 29 ngay neu roi vao nam nhuan !";
} else {
        cout << "khong ton tai thang nay !";
}
}


