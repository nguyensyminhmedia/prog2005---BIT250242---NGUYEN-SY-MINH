#include <iostream>
using namespace std;

int main() {
    int n, s = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        s = s + i;
    }

    cout << "Tong = " << s;

    return 0;
}