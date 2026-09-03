🚀 Daily C++ OOP Practice

A daily C++ Object-Oriented Programming (OOP) practice repository
where I learn, experiment with, and strengthen my understanding of C++
concepts through small programs.

This repository is intentionally built around consistent daily
practice rather than only collecting finished projects. Each program
represents a concept I am learning and practicing step by step.

🎯 Purpose

The main goal of this repository is to:

Build a strong foundation in C++ OOP

Practice concepts by writing code regularly

Understand how classes and objects work

Experiment with different C++ language features

Improve problem-solving and coding confidence

Keep track of my learning progress over time

Learn → Code → Experiment → Repeat

📂 Current Practice Files

File             Concepts Practiced

chai.cpp       Classes, Objects, Data Members, Member Functions,
vector, Object Initialization

Person.cpp     Classes, Private/Public Members, Member Function
Declaration & Definition, Scope Resolution Operator

🧠 Concepts Practiced

1. Classes & Objects

The repository starts with basic class and object concepts.

For example, chai.cpp defines a Chai class containing:

Teaname

serving

ingredients

Displaydata()

An object chaiOne is then created and its data is initialized.

This helps me understand the fundamental relationship:

Class → Blueprint
Object → Instance of the class

2. Member Functions

I am practicing both functions defined inside and outside a class.

In Person.cpp, the class declares:

void getData();
void DisplayData();

and the functions are implemented outside the class using the scope
resolution operator:

void Person::getData()

This is helping me understand how class declarations and member-function
definitions are separated.

3. Access Specifiers

The Person practice program contains data members such as:

char name[20];
int age;

followed by a public: section containing member functions.

This is part of learning how access control works inside classes.

4. Scope Resolution Operator

Person.cpp also gives practice with:

Person::getData()
Person::DisplayData()

The :: operator is used to define class member functions outside the
class.

5. Vectors Inside Classes

In chai.cpp, the class contains:

vector<string> ingredients;

This gives practice combining STL containers with classes, while
also learning how an object's data can contain multiple values.

6. Enumerations

enum.cpp contains examples of different enumerations:

enum Day
enum Month
enum Marks
enum TrafficLight

This helps me practice representing a fixed set of named values.

The program also uses an enumeration in a conditional statement:

TrafficLight signal = Green;

and checks the current value using if / else if / else.

7. Symbolic Constants

The practice also includes:

#define Pi 3.14159

and uses it to calculate the area of a circle.

This is part of experimenting with constants and symbolic values in C++.

8. Reference Variables

enum.cpp also contains a reference-variable example:

int x = 10;
int &y = x;

The program then changes y and observes the effect on x.

This helps me understand that a reference can act as another name for an
existing variable.

📈 Learning Approach

I am following a simple daily-practice approach:

Learn a Concept
      ↓
Write a Small Program
      ↓
Run & Test It
      ↓
Experiment / Modify It
      ↓
Understand What Changed
      ↓
Move to the Next Concept

The purpose is not to write huge programs immediately. Instead, I am
building understanding through small, focused C++ programs.

🔥 Daily Practice Goals

As I continue this repository, I plan to practice concepts such as:

Classes & Objects

Constructors

Destructors

Encapsulation

Access Specifiers

this Pointer

Static Members

Friend Functions

Inheritance

Types of Inheritance

Polymorphism

Function Overloading

Operator Overloading

Function Overriding

Virtual Functions

Abstract Classes

Interfaces / Pure Virtual Functions

Composition & Aggregation

Exception Handling

Templates

STL with OOP

File Handling

Mini OOP Projects

🗓️ Daily Coding Habit

This repository represents my ongoing C++ OOP practice journey.

Instead of trying to master everything in one day, I am focusing on
making progress consistently:

One concept. One program. One step forward every day.

New files and examples will be added as I continue learning.

🛠️ Technologies

Language: C++

Compiler: Any standard C++ compiler

Editor: VS Code / Any C++ IDE

Version Control: Git & GitHub

▶️ How to Run

Compile any .cpp file using a C++ compiler.

Using g++

g++ chai.cpp -o chai
./chai

For Person.cpp:

g++ Person.cpp -o Person
./Person

For enum.cpp:

g++ enum.cpp -o enum
./enum

On Windows, the generated .exe can be executed from the terminal.

📊 Progress Tracker

Basic Class

Object Creation

Data Members

Member Functions

Functions Outside Class

Scope Resolution Operator

vector with Class

Enumerations

Symbolic Constants

Reference Variables

Constructors

Destructors

Encapsulation

Inheritance

Polymorphism

Operator Overloading

Virtual Functions

Abstract Classes

Templates

OOP Mini Projects

📌 Repository Philosophy

This is a learning repository, not a collection of perfect code.

Some programs may be simple, experimental, or written in different ways
because the purpose is to understand the language by actually writing
and modifying code.

I will keep improving these programs as my understanding of C++ grows.

👨‍💻 About Me

Krishna Sharma
B.Tech CSE (AI/ML) Student

I am using this repository to strengthen my C++ fundamentals, improve my
programming skills, and build a strong foundation in Object-Oriented
Programming.

⭐ Goal

Practice C++ every day → Understand OOP deeply → Solve better
problems → Build real projects.

If you're also learning C++, feel free to explore the repository and
practice along with me.
