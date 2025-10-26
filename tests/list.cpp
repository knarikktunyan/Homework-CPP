#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;

    //verjic a sksum
    numbers.push_back(10);   
    numbers.push_back(20);
    numbers.push_front(5);  

    cout << "Numbers in the list: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // //dimacic hanuma
    numbers.pop_front();

    // //verjica hanum
    numbers.pop_back();

    cout << "After removing: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);


    list<string> books;

    books.push_back("1984");
    books.push_back("Animal farm");
    books.push_back("We");

    int index = 0;
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (*it == "We") {
            cout << index << endl;
        }
        index++;
    }

}
