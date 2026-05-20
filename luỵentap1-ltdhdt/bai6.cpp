#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap so tu 1-7: ";
    cin >> n;

    switch (n) {
        case 1:
            cout << "Thu 2";
            break;

        case 2:
            cout << "Thu 3";
            break;

        case 3:
            cout << "Thu 4";
            break;

        case 4:
            cout << "Thu 5";
            break;

        case 5:
            cout << "Thu 6";
            break;

        case 6:
            cout << "Thu 7";
            break;

        case 7:
            cout << "Chu nhat";
            break;

        default:
            cout << "Khong hop le";
    }

    return 0;
}