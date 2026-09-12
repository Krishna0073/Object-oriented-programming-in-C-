#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int* marks;       

public:


    Student(string name, int* marks)
    {
        this->name = name;
        this->marks = marks;
    }


    void DisplayData()
    {
        cout << "Student Name: " << this->name << endl;
        cout << "Marks: " << *(this->marks) << endl;
    }

    // Change marks
    void ChangeMarks(int newMarks)
    {
        *(this->marks) = newMarks;
    }
};

int main()
{

    int m = 90;

    Student s("Krishna", &m);


    s.DisplayData();

    cout << endl;
    
    Student* ptr = &s;

    ptr->DisplayData();

    cout << endl;

    ptr->ChangeMarks(95);

    cout << "After changing marks:" << endl;
    ptr->DisplayData();

    return 0;
}
