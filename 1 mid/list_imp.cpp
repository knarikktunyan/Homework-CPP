#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class MyList {
private:
    Node* head;
    int length;

public:
    MyList() : head(nullptr), length(0) {}

    ~MyList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr)
                current = current->next;
            current->next = newNode;
        }
        length++;
    }

    void pop_back() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* current = head;
            while (current->next->next != nullptr)
                current = current->next;
            delete current->next;
            current->next = nullptr;
        }
        length--;
    }

    void insert(int position, int value) {
        if (position < 0 || position > length) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(value);

        if (position == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1; ++i)
                current = current->next;

            newNode->next = current->next;
            current->next = newNode;
        }
        length++;
    }

    void erase(int position) {
        if (position < 0 || position >= length || head == nullptr) {
            cout << "Invalid position\n";
            return;
        }

        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1; ++i)
                current = current->next;

            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        length--;
    }

    int size() const { return length; }

    void display() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};

int main() {
    MyList list;
    list.push_back(5);
    list.push_back(10);
    list.push_back(20);

    cout << "Initial list: ";
    list.display();

    list.insert(1, 15);
    cout << "After insert: ";
    list.display();

    list.erase(2);
    cout << "After erase: ";
    list.display();

    cout << "Size: " << list.size() << "\n";
}
