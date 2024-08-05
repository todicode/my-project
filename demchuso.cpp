#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cout << "nhap so n: ";
cin >> n;
int dem  = 0;
while (n != 0){
    dem += 1;
    n/=10;
}
cout << "day la so co " << dem << " " << "chu so";
}

