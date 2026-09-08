# 🚀 Daily C++ OOP Practice — Day 5

Welcome to my **C++ Object-Oriented Programming (OOP) Practice Repository**.

This repository contains the programs I write while learning and practicing **C++ OOP concepts on a daily basis**. Instead of only learning theory, I am implementing each concept through small programs and experiments.

> **Learn → Code → Practice → Experiment → Improve**

---

## 🎯 Purpose

The main purpose of this repository is to build a strong foundation in C++ and gradually master Object-Oriented Programming.

Through daily practice, I am working on:

* Understanding OOP concepts through code
* Writing classes and objects
* Practicing member functions
* Understanding access control
* Working with STL containers inside classes
* Understanding friend functions
* Working with pointers and memory
* Understanding pointers with objects and classes
* Experimenting with C++ language features
* Improving problem-solving and programming skills
* Maintaining a record of my daily learning progress

---

## 📂 Practice Files

| File                   | Concepts Practiced                                                                                   |
| ---------------------- | ---------------------------------------------------------------------------------------------------- |
| `chai.cpp`             | Classes, Objects, Data Members, Member Functions, `vector`, Object Initialization                    |
| `Person.cpp`           | Classes, Public/Private Members, Member Function Declaration & Definition, Scope Resolution Operator |
| `enum.cpp`             | Enumerations, Symbolic Constants, Reference Variables, Conditional Statements                        |
| `friend_function.cpp`  | Friend Functions, Object Comparison, `const` References                                              |
| `pointer.cpp`          | Pointers, Void Pointers, Pointer Arithmetic, Pointer to Pointer, Pointer to Objects, `this` Pointer  |
| `pointer_problems.cpp` | Dangling Pointers, Wild Pointers, Null Pointers, Safe Pointer Usage                                  |
| `object_array.cpp`     | Array of Objects, Object Pointers                                                                    |

---

# 🧠 Concepts Practiced

## 1. Classes & Objects

I started with the basic building blocks of OOP: **classes and objects**.

For example, the `Chai` class contains:

```cpp
class Chai {
public:
    string Teaname;
    int serving;
    vector<string> ingredients;
};
```

Objects are then created from the class:

```cpp
Chai chaiOne;
Chai chaiTwo;
```

### Concept

**Class → Blueprint**

**Object → Instance of the class**

---

## 2. Data Members

I am practicing how objects can store their own data.

For example:

```cpp
string Teaname;
int serving;
vector<string> ingredients;
```

Each `Chai` object can contain different values.

Example:

```text
chaiOne
 ├── Teaname → Lemon Tea
 ├── serving → 2
 └── ingredients → lemon, water, tea

chaiTwo
 ├── Teaname → Ginger Tea
 ├── serving → 1
 └── ingredients → ginger, water, honey
```

---

## 3. Member Functions

I am also practicing functions that belong to a class.

Example:

```cpp
void Displaydata() {
    cout << "Teaname: " << Teaname << endl;
    cout << "serving: " << serving << endl;
}
```

Member functions allow objects to perform operations using their own data.

---

## 4. Member Functions Outside the Class

In `Person.cpp`, I practice declaring functions inside the class and defining them outside.

Declaration:

```cpp
class Person {
public:
    void getData();
    void DisplayData();
};
```

Definition:

```cpp
void Person::getData() {
    // code
}
```

Here, `::` is the **scope resolution operator**.

---

## 5. STL `vector` with Classes

I am also practicing how STL containers can be used as class members.

Example:

```cpp
vector<string> ingredients;
```

This allows a `Chai` object to store multiple ingredients.

---

# ⭐ 6. Friend Functions

One of the concepts I practiced is the **friend function**.

A friend function is **not a member function of the class**, but the class can give it permission to access its private and protected members.

Example:

```cpp
class Chai {
public:
    string Teaname;
    int serving;

    friend bool compare(
        const Chai &chaiOne,
        const Chai &chaiTwo
    );
};
```

The function is then defined outside the class:

```cpp
bool compare(
    const Chai &chaiOne,
    const Chai &chaiTwo
) {
    return chaiOne.serving > chaiTwo.serving;
}
```

The function can then compare two different `Chai` objects.

---

## 7. `const` References

While practicing friend functions, I also learned about:

```cpp
const Chai &chaiOne
```

This means the object is passed by reference without allowing the function to modify it.

This is useful when a function only needs to **read** an object's data.

---

## 8. Enumerations

In `enum.cpp`, I practiced C++ enumerations.

Example:

```cpp
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
```

I learned how enums can represent a fixed collection of named values.

---

## 9. Reference Variables

I also practiced reference variables.

Example:

```cpp
int x = 10;
int &y = x;
```

Here, `y` acts as another name for `x`.

Changing `y` also changes `x`.

```cpp
y = 50;
```

Result:

```text
x = 50
y = 50
```

---

# 🔥 10. Pointers in C++

Today's topic focuses on **pointers**, which are one of the most important concepts for both **OOP and DSA**.

A pointer is a variable that stores the **memory address of another variable**.

Example:

```cpp
int x = 10;

int* ptr = &x;
```

Here:

```text
x       → stores 10
&x      → address of x
ptr     → stores address of x
*ptr    → value stored at that address
```

Example:

```cpp
cout << x;       // 10
cout << *ptr;    // 10
```

---

# 11. Void Pointer

I practiced **void pointers**, which are generic pointers that can store the address of different data types.

Example:

```cpp
int x = 10;

void* ptr = &x;

cout << *(int*)ptr;
```

A `void*` cannot normally be dereferenced directly because the compiler does not know what type of data it points to.

---

# 12. Pointer Arithmetic

I also practiced pointer arithmetic.

Pointers can be moved using:

```cpp
p++;
p--;
p + n;
p - n;
```

This is particularly useful when working with arrays.

Example:

```cpp
int arr[] = {10, 20, 30};

int* p = arr;

cout << *p << endl;

p++;

cout << *p << endl;
```

Output:

```text
10
20
```

Pointer arithmetic moves according to the **size of the data type**, rather than simply moving one byte.

---

# 13. Pointer to Pointer

A pointer can also store the address of another pointer.

Example:

```cpp
int x = 10;

int* p = &x;

int** q = &p;
```

The relationship is:

```text
q
 ↓
p
 ↓
x
 ↓
10
```

Therefore:

```cpp
cout << x;       // 10
cout << *p;      // 10
cout << **q;     // 10
```

---

# ⚠️ 14. Problems with Pointers

I also learned about common problems that can occur when using pointers.

### Dangling Pointer

A dangling pointer points to memory that has already been released.

```cpp
int* p = new int(10);

delete p;

p = nullptr;
```

After `delete`, using `*p` before resetting it would be dangerous.

---

### Wild Pointer

A wild pointer is an uninitialized pointer.

```cpp
int* p;
```

It may contain an unpredictable memory address.

A safer approach is:

```cpp
int* p = nullptr;
```

---

### Null Pointer

A null pointer intentionally points to nothing.

```cpp
int* p = nullptr;
```

It can be checked before using it:

```cpp
if (p == nullptr) {
    cout << "Pointer is empty";
}
```

A null pointer should **never be dereferenced**.

---

# ⭐ 15. Classes Containing Pointers

A class can contain pointers as data members.

Example:

```cpp
class Node {
public:
    int data;
    Node* next;
};
```

This is extremely important for **Data Structures**.

The `next` pointer can store the address of another `Node`.

```text
Node 1                 Node 2
┌─────────────┐       ┌─────────────┐
│ data = 10   │       │ data = 20   │
│ next ───────┼──────→│ next = ...  │
└─────────────┘       └─────────────┘
```

This concept forms the foundation of **Linked Lists**.

---

# 16. Pointer to Objects

A pointer can also point to an object.

Example:

```cpp
class Student {
public:
    string name;

    void display() {
        cout << name;
    }
};
```

Creating an object:

```cpp
Student s;
```

Creating a pointer to the object:

```cpp
Student* ptr = &s;
```

Members can then be accessed using the `->` operator:

```cpp
ptr->name;
ptr->display();
```

### Important

```text
Object       → .
Object pointer → ->
```

Example:

```cpp
s.display();       // Object
ptr->display();    // Pointer to object
```

---

# ⭐ 17. `this` Pointer

The `this` pointer is a special pointer available inside non-static member functions.

It points to the **current object**.

Example:

```cpp
class Student {

public:

    string name;

    void setName(string name) {
        this->name = name;
    }
};
```

Here:

```cpp
this->name
```

refers to the `name` belonging to the current object.

Therefore:

```cpp
this->name = name;
```

means:

```text
current object's name = parameter name
```

The `this` pointer is especially useful when class data members and function parameters have the same name.

---

# 18. Array of Objects

I also practiced creating multiple objects using an array.

Example:

```cpp
class Student {
public:
    string name;

    void display() {
        cout << name << endl;
    }
};
```

An array of objects can be created using:

```cpp
Student students[3];
```

Each element is a separate `Student` object.

```cpp
students[0].name = "Krishna";
students[1].name = "Rahul";
students[2].name = "Aman";
```

Objects can be accessed using the normal `.` operator.

---

# 19. Array of Object Pointers

I also explored arrays containing pointers to objects.

```cpp
Student* students[3];
```

Unlike:

```cpp
Student students[3];
```

this creates an array of **pointers**, not an array of actual Student objects.

The pointers can point to dynamically created objects:

```cpp
students[0] = new Student;
students[1] = new Student;
students[2] = new Student;
```

Members can then be accessed using:

```cpp
students[0]->name;
```

---

# 📈 My Learning Progress

```text
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
this Pointer
    ↓
Constructors
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
```

---

# 🗓️ Daily Practice Approach

I am following a simple approach:

### Day → Learn → Code → Test → Experiment

For every new concept, I try to:

1. Understand the basic theory
2. Write a small C++ program
3. Run the program
4. Change the code and observe the result
5. Fix errors myself
6. Add the concept to this repository
7. Move to the next concept

The goal is **consistent practice rather than trying to learn everything at once**.

---

# 🔥 OOP Roadmap

* [x] Classes
* [x] Objects
* [x] Data Members
* [x] Member Functions
* [x] Scope Resolution Operator
* [x] `vector` with Classes
* [x] Enumerations
* [x] Reference Variables
* [x] Friend Functions
* [x] Pointers
* [x] Void Pointers
* [x] Pointer Arithmetic
* [x] Pointer to Pointer
* [x] Dangling Pointers
* [x] Wild Pointers
* [x] Null Pointers
* [x] Classes Containing Pointers
* [x] Pointer to Objects
* [x] `this` Pointer
* [x] Array of Objects
* [x] Array of Object Pointers
* [ ] Constructors
* [ ] Constructor Overloading
* [ ] Destructors
* [ ] Encapsulation
* [ ] Static Members
* [ ] Friend Classes
* [ ] Inheritance
* [ ] Types of Inheritance
* [ ] Function Overloading
* [ ] Operator Overloading
* [ ] Function Overriding
* [ ] Polymorphism
* [ ] Virtual Functions
* [ ] Pure Virtual Functions
* [ ] Abstract Classes
* [ ] Templates
* [ ] Exception Handling
* [ ] File Handling
* [ ] STL with OOP
* [ ] OOP Mini Projects

---

# 📊 Progress Philosophy

This repository is not intended to contain perfect code from day one.

Some programs may be simple because I am using them to understand individual concepts.

As I learn more, I will:

* Refactor older programs
* Improve coding style
* Add comments and explanations
* Solve more complex problems
* Combine multiple OOP concepts
* Build complete mini-projects

---

# 🛠️ Technologies

* **Language:** C++
* **Compiler:** GCC / MinGW
* **Editor:** VS Code
* **Version Control:** Git & GitHub

---

# ▶️ How to Run

Compile a C++ file using `g++`.

Example:

```bash
g++ pointer.cpp -o pointer
```

Run:

```bash
./pointer
```

For Windows:

```bash
pointer.exe
```

---

# 👨‍💻 About Me

**Krishna Sharma**

B.Tech CSE (AI/ML) Student

I am using this repository to strengthen my C++ fundamentals, practice Object-Oriented Programming, and develop better programming and problem-solving skills.

---

# ⭐ Final Goal

> **Code every day. Understand every concept. Build something with it.**

This repository represents my ongoing journey from **C++ fundamentals to advanced OOP and real-world projects**.

More concepts, programs, experiments, and projects will be added as I continue learning.
