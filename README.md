# 🚀 Daily C++ OOP Practice

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
* Experimenting with C++ language features
* Improving problem-solving and programming skills
* Maintaining a record of my daily learning progress

---

## 📂 Practice Files

| File                  | Concepts Practiced                                                                                   |
| --------------------- | ---------------------------------------------------------------------------------------------------- |
| `chai.cpp`            | Classes, Objects, Data Members, Member Functions, `vector`, Object Initialization                    |
| `Person.cpp`          | Classes, Public/Private Members, Member Function Declaration & Definition, Scope Resolution Operator |
| `enum.cpp`            | Enumerations, Symbolic Constants, Reference Variables, Conditional Statements                        |
| `friend_function.cpp` | Friend Functions, Object Comparison, `const` References                                              |

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

One of the latest concepts I am practicing is the **friend function**.

A friend function is **not a member function of the class**, but the class can give it permission to access its members.

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

### Why am I practicing this?

The `compare()` function allows me to compare two different `Chai` objects.

For example:

```text
chaiOne.serving = 2
chaiTwo.serving = 1

        ↓

compare(chaiOne, chaiTwo)

        ↓

2 > 1

        ↓

true
```

The program can then determine which tea has more servings.

### Important Point

A friend function is called like a normal function:

```cpp
compare(chaiOne, chaiTwo);
```

It is **not called using an object** like:

```cpp
chaiOne.compare(chaiTwo);   // Not how this friend function is called
```

---

## 7. `const` References

While practicing friend functions, I am also learning about:

```cpp
const Chai &chaiOne
```

This means the object is passed by reference without allowing the function to modify it.

This is useful when a function only needs to **read** an object's data.

---

## 8. Enumerations

In `enum.cpp`, I am practicing C++ enumerations.

Examples include:

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

and:

```cpp
enum Marks {
    A = 90,
    B = 80,
    C = 70,
    D = 60
};
```

I am learning how enums can represent a fixed collection of named values.

---

## 9. Reference Variables

I am also practicing reference variables.

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
Constructors
    ↓
Encapsulation
    ↓
Inheritance
    ↓
Polymorphism
    ↓
Advanced OOP
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

These are the concepts I plan to practice next:

* [x] Classes
* [x] Objects
* [x] Data Members
* [x] Member Functions
* [x] Scope Resolution Operator
* [x] `vector` with Classes
* [x] Enumerations
* [x] Reference Variables
* [x] Friend Functions
* [ ] Constructors
* [ ] Constructor Overloading
* [ ] Destructors
* [ ] Encapsulation
* [ ] `this` Pointer
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
g++ chai.cpp -o chai
```

Run:

```bash
./chai
```

For Windows:

```bash
chai.exe
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
