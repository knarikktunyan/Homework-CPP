#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4, 3, 1, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int xorAll = 0;
    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }
    int setBit = xorAll & -xorAll;  

    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit)
            num1 ^= arr[i];
        else
            num2 ^= arr[i];
    }

    cout << "Uniques: " << num1 << "  " << num2 << endl;

    return 0;
}

