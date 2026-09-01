#include<iostream>
using namespace std;
class Person{
	char name[20];
	int age;
	public:
		void getData();
		void DisplayData();
};
	void Person:: getData(){
		cout<<"Enter Name: ";
		cin>>name;
		cout<<endl;
		cout<<"Enter Age: ";
		cin>>age;
	}
	void Person:: DisplayData(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
	int main(){
		Person p;
		p.getData();
		p.DisplayData();
	}
