#include <iostream>
#include <limits>   
#include <cmath> 

using namespace std;

int main() {
    double value = 0.999999999999999;
    double epsilon = numeric_limits<double>::epsilon(); 
    double lastAccurate = value;

    while (value <= 1.0) {
        lastAccurate = value;
        value += epsilon; 
    }

    cout << "Last double: " << lastAccurate << "\n";
    cout << "First double: " << value << "\n";

    return 0;
}
