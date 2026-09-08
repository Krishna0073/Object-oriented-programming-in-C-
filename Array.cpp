#include<iostream>
using namespace std;

class Student {

public:

    string name;
    int age;

    void display() {

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    Student students[3];

    students[0].name = "Krishna";
    students[0].age = 20;

    students[1].name = "Rahul";
    students[1].age = 21;

    students[2].name = "Aman";
    students[2].age = 19;

    for(int i = 0; i < 3; i++) {

        students[i].display();
        cout << endl;
    }

    return 0;
}
