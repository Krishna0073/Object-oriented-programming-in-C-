🚀 Daily C++ OOP Practice — Day 20

Welcome to my C++ Object-Oriented Programming (OOP) Practice Repository.

This repository contains the programs I write while learning and practicing C++ OOP concepts on a daily basis. Instead of only learning theory, I am implementing each concept through small programs and experiments.

Learn → Code → Practice → Experiment → Improve

🎯 Purpose

The main purpose of this repository is to build a strong foundation in C++ and gradually master Object-Oriented Programming.

Through daily practice, I am working on:

Understanding OOP concepts through code

Writing classes and objects

Practicing member functions

Understanding access control

Working with STL containers inside classes

Understanding friend functions

Working with pointers and memory

Understanding pointers with objects and classes

Understanding the this pointer

Practicing inline functions

Experimenting with C++ language features

Improving problem-solving and programming skills

Practicing file handling using ifstream and file streams

Reading data from external files

Understanding file opening, reading, and closing operations

Maintaining a record of my daily learning progress

📂 Practice Files

File

Concepts Practiced

chai.cpp

Classes, Objects, Data Members, Member Functions, vector, Object Initialization

Person.cpp

Classes, Public/Private Members, Member Function Declaration & Definition, Scope Resolution Operator

enum.cpp

Enumerations, Symbolic Constants, Reference Variables, Conditional Statements

friend_function.cpp

Friend Functions, Object Comparison, const References

pointer.cpp

Pointers, Void Pointers, Pointer Arithmetic, Pointer to Pointer

pointer_problems.cpp

Dangling Pointers, Wild Pointers, Null Pointers, Safe Pointer Usage

object_array.cpp

Array of Objects, Object Pointers

class_pointer.cpp

Classes Containing Pointers, Pointer to Objects, this Pointer

file.cpp

File Handling, ifstream, Opening Files, Reading Data, Closing Files

inline.cpp

Inline Functions, Function Definition, Simple Function Calls

🧠 Concepts Practiced

Classes & Objects

I started with the basic building blocks of OOP: classes and objects.

A class acts as a blueprint, while an object is an instance created from that class.

class Chai {
public:
string Teaname;
int serving;
vector<string> ingredients;
};

Objects:

Chai chaiOne;
Chai chaiTwo;

Concept

Class → Blueprint

Object → Instance of the class

Data Members

I practiced how objects can store their own data.

Example:

string Teaname;
int serving;
vector<string> ingredients;

Each object can contain different values.

chaiOne
├── Teaname → Lemon Tea
├── serving → 2
└── ingredients → lemon, water, tea

chaiTwo
├── Teaname → Ginger Tea
├── serving → 1
└── ingredients → ginger, water, honey

Member Functions

Member functions are functions that belong to a class.

Example:

void Displaydata() {
cout << "Teaname: " << Teaname << endl;
cout << "serving: " << serving << endl;
}

Member functions allow objects to perform operations using their own data.

Member Functions Outside the Class

I practiced declaring functions inside a class and defining them outside.

Declaration:

class Person {
public:
void getData();
void DisplayData();
};

Definition:

void Person::getData() {
// code
}

The :: operator is called the scope resolution operator.

STL vector with Classes

I practiced using STL containers as class members.

Example:

vector<string> ingredients;

This allows an object to store multiple ingredients.

⭐ 6. Friend Functions

A friend function is not a member function of the class, but the class can give it permission to access its private and protected members.

Example:

class Chai {
public:
string Teaname;
int serving;

friend bool compare(
    const Chai &chaiOne,
    const Chai &chaiTwo
);

};

The function can then compare two different objects.

bool compare(
const Chai &chaiOne,
const Chai &chaiTwo
) {
return chaiOne.serving > chaiTwo.serving;
}

const References

I also practiced const references.

Example:

const Chai &chaiOne

This means the object is passed by reference without allowing the function to modify it.

It is useful when a function only needs to read an object's data.

Enumerations

I practiced C++ enumerations.

Example:

enum Day {
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday
};

Enums can represent a fixed collection of named values.

Reference Variables

I practiced reference variables.

Example:

int x = 10;
int &y = x;

Here, y acts as another name for x.

y = 50;

Result:

x = 50
y = 50

🔥 10. Pointers in C++

Pointers store the memory address of another variable.

Example:

int x = 10;

int* ptr = &x;

Relationship:

x       → stores 10
&x      → address of x
ptr     → stores address of x
*ptr    → value stored at that address

Void Pointer

A void* is a generic pointer that can store the address of different data types.

Example:

int x = 10;

void* ptr = &x;

cout << (int)ptr;

A void* cannot normally be dereferenced directly because the compiler does not know what type of data it points to.

Pointer Arithmetic

I practiced pointer arithmetic.

Pointers can be moved using:

p++;
p--;

p + n;
p - n;

Example:

int arr[] = {10, 20, 30};

int* p = arr;

cout << *p << endl;

p++;

cout << *p << endl;

Output:

10
20

Pointer arithmetic is especially useful when working with arrays.

Pointer to Pointer

A pointer can also store the address of another pointer.

Example:

int x = 10;

int* p = &x;

int** q = &p;

Relationship:

q
↓
p
↓
x
↓
10

Therefore:

cout << x;       // 10
cout << *p;      // 10
cout << **q;     // 10

⚠️ 14. Problems with Pointers

Dangling Pointer

A dangling pointer points to memory that has already been released.

int* p = new int(10);

delete p;

p = nullptr;

After delete, using *p before resetting it would be dangerous.

Wild Pointer

A wild pointer is an uninitialized pointer.

int* p;

It may contain an unpredictable memory address.

A safer approach is:

int* p = nullptr;

Null Pointer

A null pointer intentionally points to nothing.

int* p = nullptr;

It can be checked before using it:

if (p == nullptr) {
cout << "Pointer is empty";
}

A null pointer should never be dereferenced.

⭐ 15. Classes Containing Pointers

Today's OOP practice focused on understanding how a class can contain a pointer as a data member.

Example:

class Student {
private:
int* marks;
};

Here:

int* marks;

means the Student object contains a pointer that can store the address of an integer.

For example:

int m = 90;

Student s(&m);

The pointer inside the object can store the address of m.

Conceptually:

m
┌──────┐
│  90  │
└───▲──┘
│
│ address
│
Student object
┌─────────────┐
│ marks ──────┼───→ m
└─────────────┘

To access the value through the pointer:

*marks

This concept is especially important in Data Structures, where nodes contain pointers to other nodes.

Example:

class Node {
public:
int data;
Node* next;
};

Here:

Node* next;

stores the address of another Node.

This forms the foundation of Linked Lists.

⭐ 16. Pointer to Objects

A pointer can also point to an object.

Example:

class Student {
public:
string name;

void display() {
    cout << name;
}

};

Create an object:

Student s;

Create a pointer to the object:

Student* ptr = &s;

Now ptr contains the address of object s.

Because ptr is a pointer, we use the -> operator:

ptr->name;
ptr->display();

Important Rule

Object          → .
Object Pointer  → ->

Example:

s.display();       // Object

ptr->display();    // Pointer to object

⭐ 17. this Pointer

The this pointer is a special pointer available inside non-static member functions.

It points to the current object.

Example:

class Student {
public:
string name;

void setName(string name) {
    this->name = name;
}

};

Here:

this->name

refers to the name belonging to the current object.

Therefore:

this->name = name;

means:

current object's name = parameter name

The this pointer is especially useful when class data members and function parameters have the same name.

⭐ 18. Inline Functions

I also practiced inline functions in C++.

An inline function is a function where the compiler may replace the function call with the actual function code. This can reduce the overhead of a normal function call for small and simple functions.

Basic Syntax

inline int sum(int a, int b) {
return a + b;
}

Calling the function:

cout << sum(5, 10);

Output:

15

How It Works

Normally:

Function Call
↓
Go to Function
↓
Execute Function
↓
Return Result

With an inline function, the compiler may conceptually replace the call with the function operation:

sum(5, 10)
↓
5 + 10
↓
15

Important Points

inline is a request to the compiler, not a command forcing inlining.

It is mainly useful for small and simple functions.

It can reduce function-call overhead.

The compiler decides whether to actually inline the function.

Inline functions can be defined directly in a class definition.

Practice Program

#include<iostream>
using namespace std;

inline int sum(int a, int b){
return a+b;
}

int main(){
cout<<sum(5,10);
}

Output:

15

Key Idea

inline function
↓
small function
↓
compiler may expand function call
↓
less function-call overhead

🧩 19. Combining Classes Containing Pointers, Pointer to Objects & this

I practiced combining all three concepts in one program.

Example:

class Student {
private:
string name;
int* marks;

public:

Student(string name, int* marks) {
    this->name = name;
    this->marks = marks;
}

void DisplayData() {
    cout << "Student Name: " << this->name << endl;
    cout << "Marks: " << *(this->marks) << endl;
}

void ChangeMarks(int newMarks) {
    *(this->marks) = newMarks;
}

};

Creating the object:

int m = 90;

Student s("Krishna", &m);

Creating a pointer to the object:

Student* ptr = &s;

Calling functions through the object pointer:

ptr->DisplayData();

ptr->ChangeMarks(95);

ptr->DisplayData();

Conceptual relationship

                 Student object
                ┌───────────────┐
                │ name          │
                │ Krishna       │
                │               │
                │ marks ────────┼────→ m
                └───────▲───────┘      90
                        │
                        │
                     this
                        │
                        │
                 Student* ptr

This helped me understand how objects, pointers, and the this pointer work together.

Array of Objects

I also practiced creating multiple objects using an array.

Example:

class Student {
public:
string name;

void display() {
    cout << name << endl;
}

};

Creating an array:

Student students[3];

Each element is a separate Student object.

students[0].name = "Krishna";
students[1].name = "Rahul";
students[2].name = "Aman";

Objects are accessed using the . operator.

Array of Object Pointers

I also explored arrays containing pointers to objects.

Student* students[3];

Unlike:

Student students[3];

this creates an array of pointers, not an array of actual Student objects.

The pointers can point to dynamically created objects:

students[0] = new Student;
students[1] = new Student;
students[2] = new Student;

Members can then be accessed using:

students[0]->name;

⭐ 22. Constructors

I practiced Constructors in C++.

A constructor is a special member function of a class that is automatically called when an object is created.

A constructor is mainly used to initialize the data members of an object.

Basic Syntax

class Student {
public:
Student() {
cout << "Constructor called";
}
};

Creating the object:

Student s;

When s is created, the constructor is automatically called.

Important Properties

A constructor:

Has the same name as the class

Has no return type

Is automatically called when an object is created

Is mainly used for initialization

Can be overloaded

Can have parameters

Can have default arguments

Default Constructor

A constructor with no parameters is called a default constructor.

Example:

class Student {
public:
Student() {
cout << "Default Constructor";
}
};

Parameterized Constructor

A constructor that receives parameters is called a parameterized constructor.

Example:

class Student {
int age;

public:
Student(int age) {
this->age = age;
}

void display() {
    cout << age;
}

};

Creating the object:

Student s(20);

Here, 20 is passed to the constructor.

Constructor Overloading

A class can have multiple constructors with different parameter lists.

Example:

class Student {
public:
Student() {
cout << "Default";
}

Student(int age) {
    cout << age;
}

};

This is called constructor overloading.

Copy Constructor

A copy constructor creates a new object using an existing object.

Basic Syntax:

Student(const Student &s) {
age = s.age;
}

Example:

class Student {
int age;

public:
Student(int age) {
this->age = age;
}

Student(const Student &s) {
    age = s.age;
}

void display() {
    cout << age;
}

};

Creating objects:

Student s1(20);
Student s2(s1);

Here, s2 receives the data of s1.

Constructor Flow

Object creation
↓
Constructor called automatically
↓
Data members initialized
↓
Object becomes ready to use

⭐ 23. Destructors

I also practiced Destructors in C++.

A destructor is a special member function that is automatically called when an object is destroyed.

It is commonly used for cleanup and releasing resources.

Basic Syntax

class Student {
public:
~Student() {
cout << "Destructor called";
}
};

Important Properties

A destructor:

Has the same name as the class

Starts with ~

Has no return type

Takes no parameters

Cannot be overloaded

Is automatically called when an object is destroyed

Example:

class Student {
public:
Student() {
cout << "Constructor" << endl;
}

~Student() {
    cout << "Destructor" << endl;
}

};

int main() {
Student s;
}

Execution:

Student s;
↓
Constructor called
↓
Program uses object
↓
Object goes out of scope
↓
Destructor called

Constructor vs Destructor

Constructor

Initializes an object

Same name as class

No ~

Can have parameters

Can be overloaded

Called when object is created

Destructor

Cleans up an object

Same name as class with ~

Cannot have parameters

Cannot be overloaded

Called when object is destroyed

Dynamic Memory and Destructor

When a class manages dynamically allocated memory, a destructor can release that memory.

Example:

class Student {
int* marks;

public:
Student(int value) {
marks = new int(value);
}

~Student() {
    delete marks;
}

};

Here:

new allocates memory.

delete releases the allocated memory.

Conceptually:

Constructor
↓
Allocate resource
↓
Use resource
↓
Destructor
↓
Release resource

Practice Programs

The program in constructor.cpp practices default, parameterized, overloaded, and copy constructors.

The program in destructor.cpp practices destructor execution and object lifetime.

Key Idea

Constructor
↓
Object creation
↓
Initialization

Destructor
↓
Object destruction
↓
Cleanup

⭐ 24. File Handling in C++

Today's practice introduced File Handling in C++.

File handling allows a program to store data in a file and read data from a file instead of keeping everything only in memory.

For reading data from a file, I practiced using the ifstream class from the <fstream> header.

Basic Structure

#include <iostream>
#include <fstream>
using namespace std;

int main() {
ifstream file;
file.open("data.txt");

string name;
int marks;

file >> name >> marks;

cout << "Name: " << name << endl;
cout << "Marks: " << marks << endl;

file.close();

return 0;

}

Important Concepts

#include <fstream>

Provides the file stream classes used for file handling.

ifstream

ifstream stands for input file stream and is used to read data from a file.

ifstream file;

Opening a file

file.open("data.txt");

This opens the specified file so the program can read from it.

Reading from a file

The extraction operator >> can be used with a file stream just like cin.

file >> name >> marks;

Closing a file

file.close();

Closing the file releases the file resource after the required operations are completed.

Data Flow

External File
↓
ifstream
↓
Read using >>
↓
Variables
↓
Program Output

What I Practiced Today

Including <fstream>

Creating an ifstream object

Opening a file

Reading string and integer data

Using >> with a file stream

Displaying file data using cout

Closing the file

Practice Program

The program in file.cpp reads a student's name and marks from a file and displays them on the screen.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream file;
file.open("data.txt");

string name;
int marks;

file>>name>>marks;

cout<<"Name: "<<name<<endl;
cout<<"Marks: "<<marks<<endl;

file.close();

return 0;

}

Key Difference

cin         → reads input from keyboard
ifstream    → reads input from a file
cout        → displays output on screen
ofstream    → writes output to a file

File handling is useful for storing information such as student records, bank data, logs, configuration data, and application records.

📈 My Learning Progress

C++ Basics
↓
Classes
↓
Objects
↓
Data Members
↓
Member Functions
↓
Scope Resolution
↓
STL with Classes
↓
Enums & References
↓
Friend Functions
↓
Pointers
↓
Pointer Arithmetic
↓
Pointer to Pointer
↓
Pointers with Objects
↓
Classes Containing Pointers
↓
Pointer to Objects
↓
this Pointer
↓
Constructors
↓
Constructor Overloading
↓
Copy Constructor
↓
Destructors
↓
Encapsulation
↓
Inheritance
↓
Polymorphism
↓
Advanced OOP
↓
OOP Projects

🗓️ Daily Practice Approach

I am following a simple approach:

Day → Learn → Code → Test → Experiment → Document

For every new concept, I try to:

Understand the basic theory

Write a small C++ program

Run the program

Change the code and observe the result

Fix errors myself

Add the concept to this repository

Move to the next concept

The goal is consistent practice rather than trying to learn everything at once.

🔥 OOP Roadmap

Classes

Objects

Data Members

Member Functions

Scope Resolution Operator

vector with Classes

Enumerations

Reference Variables

Friend Functions

Pointers

Void Pointers

Pointer Arithmetic

Pointer to Pointer

Dangling Pointers

Wild Pointers

Null Pointers

Classes Containing Pointers

Pointer to Objects

this Pointer

Inline Functions

Array of Objects

Array of Object Pointers

Constructors

Default Constructor

Parameterized Constructor

Constructor Overloading

Copy Constructor

Destructors

Encapsulation

Static Members

Friend Classes

Inheritance

Types of Inheritance

Function Overloading

Operator Overloading

Function Overriding

Polymorphism

Virtual Functions

Pure Virtual Functions

Abstract Classes

Templates

Exception Handling

File Handling

STL with OOP

OOP Mini Projects

📌 Day 20 Summary

Today I continued expanding my C++ OOP knowledge by practicing Constructors, Destructors, the this pointer, Inline Functions, and File Handling.

I learned how to:

Work with constructors and understand automatic object initialization

Use default and parameterized constructors

Understand constructor overloading and copy constructors

Understand destructors and automatic object cleanup

Understand the object lifetime from construction to destruction

Work with the this pointer and identify the current object

Use this->member when parameter names and data members are the same

Understand inline functions

Define and call a simple inline function

Understand how the compiler may expand small inline function calls

Open a file using ifstream

Read data from a file using >>

Store data from a file in variables

Display extracted data

Close the file properly

These concepts strengthened my understanding of C++ pointers, functions, classes, and practical programming.

📊 Progress Philosophy

This repository is not intended to contain perfect code from day one.

Some programs may be simple because I am using them to understand individual concepts.

As I learn more, I will:

Refactor older programs

Improve coding style

Add comments and explanations

Solve more complex problems

Combine multiple OOP concepts

Build complete mini-projects

🛠️ Technologies

Language: C++

Compiler: GCC / MinGW

Editor: VS Code

Version Control: Git & GitHub

▶️ How to Run

Compile a C++ file using g++.

Example:

g++ file.cpp -o file

Run:

./file

For Windows:

file.exe

👨‍💻 About Me

Krishna Sharma

B.Tech CSE (AI/ML) Student

I am using this repository to strengthen my C++ fundamentals, practice Object-Oriented Programming, and develop better programming and problem-solving skills.

⭐ Final Goal

Code every day. Understand every concept. Build something with it.

This repository represents my ongoing journey from C++ fundamentals to advanced OOP, constructors, destructors, file handling, inline functions, and real-world projects.

More concepts, programs, experiments, and projects will be added as I continue learning.
