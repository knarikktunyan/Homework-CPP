#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; //sarqec
    //qcuma mejy
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //mer uzats elemtn
    cout << "First: " << numbers[0] << endl;

    //karanq poxenq
    numbers[1] = 50;
    //arden 10 50 30
    int sum = 0;
    cout << "sum ";
    for(int i = 0; i < numbers.size(); i++){
           sum+= numbers[i];
    }
    cout<< sum << endl;
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); ++i){
        if (numbers[i] >= max){
            max=numbers[i];
        }
    }
    cout << max << endl;

    numbers.push_back(40);
    numbers.push_back(80);
    numbers.push_back(81);


    vector<int> even;
    vector<int> odd;
    int i;
    for(i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] % 2 == 0)
            even.push_back(numbers[i]);
        else
            odd.push_back(numbers[i]);
    }

    cout << "Even: ";
    for (int n : even) cout << n << " ";
    cout << endl;

    cout << "Odd: ";
    for (int n : odd) cout << n << " ";
    cout << endl;




    vector<string> authors;
    authors.push_back("Orwel");
    authors.push_back("Camus");
    for(int i = 0 ; i< authors.size(); i++)
    {
        cout << authors[i] << " ";
    }
    cout << endl;
    cout << authors[0];
    cout << endl;
    authors.push_back("Kafka");
    for(int i = 0 ; i< authors.size(); i++)
    {
        cout << authors[i] << " ";
    }
    cout << endl;

    cout << authors.size()<< endl;
    for(int i = 0 ; i< authors.size(); i++)
    {
        if(authors[i] == "Orwel")
            cout << i << endl;
    }

}
