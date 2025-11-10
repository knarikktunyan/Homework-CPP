#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    cout << "unique element: " << result << endl;

    return 0;
}
