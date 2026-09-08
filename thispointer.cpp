#include<iostream>
using namespace std;

class Student {

public:

    string name;
    int age;

    void setData(string name, int age) {

        this->name = name;
        this->age = age;
    }

    void display() {

        cout << name << endl;
        cout << age << endl;
    }
};

int main() {

    Student s;

    s.setData("Krishna", 20);

    s.display();

}
