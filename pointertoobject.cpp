#include<iostream>
using namespace std;

class Student {

public:

    string name;

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {

    Student s;

    Student* ptr = &s;

    ptr->name = "Krishna";

    ptr->display();

    return 0;
}
