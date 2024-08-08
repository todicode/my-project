#include <iostream>
#include <cmath>
//ve trai tim 6x7
using namespace std;
int main(){
    for (int i=1;i<=6;i++){
        for (int j=1;j<=7;j++){
            if (i==1 && (j==1 || j==4 || j==7)
                || i==4 && (j==1 || j==7)
                || i==5 && (j<3 || j>5)
                || i==6 && (j<4 || j>4))
            cout << " ";
            else cout << "*";

        }
        cout << endl;
    }
}
