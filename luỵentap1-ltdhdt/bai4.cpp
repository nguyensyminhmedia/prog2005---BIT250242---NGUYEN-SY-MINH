#include <iostream>
using namespace std;

int main() {
    float a, b, x;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        cout << "Phuong trinh vo nghiem hoac vo so nghiem";
    } else {
        x = -b / a;
        cout << "x = " << x;
    }

    return 0;
}