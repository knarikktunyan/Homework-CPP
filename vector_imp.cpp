#include <iostream>
#include <stdexcept>
using namespace std;

class MyVector {
private:
    int capacity;
    int length;
    int* data;

public:
    MyVector(int initialCapacity)
        : capacity(initialCapacity), length(0), data(new int[initialCapacity]) {}

    ~MyVector() { delete[] data; }

    int& operator[](int index) {
        if (index < 0 || index >= length) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }

    int size() const { return length; }
    int getCapacity() const { return capacity; }

    void push_back(int value) {
        if (length == capacity) {
            int newCapacity = static_cast<int>(capacity * 1.7) + 1;
            int* newData = new int[newCapacity];
            for (int i = 0; i < length; ++i)
                newData[i] = data[i];
            delete[] data;
            data = newData;
            capacity = newCapacity;
        }
        data[length++] = value;
    }

    void pop_back() {
        if (length == 0) {
            cout << "Vector is empty\n";
            return;
        }
        length--;
    }

    void clear() { length = 0; }
};

int main() {
    MyVector vec(2);

    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(20);

    cout << "vec[1] = " << vec[1] << "\n";
    vec[1] = 42;

    cout << "After modification: ";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << "\n";

    cout << "Size: " << vec.size() << "\n";
    cout << "Capacity: " << vec.getCapacity() << "\n";

    vec.pop_back();

    cout << "After pop_back: ";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << "\n";

    vec.clear();

    cout << "After clear: ";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << "(empty)\n";
}
