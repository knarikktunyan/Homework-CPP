#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = static_cast<double>(a);

    const int x = 10;
    int* y = const_cast<int*>(&x);

    int n = 65;
    char c = reinterpret_cast<char&>(n);

    cout << b << endl;
    cout << *y << endl;
    cout << c << endl;

    return 0;
}
