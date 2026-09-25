
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream file;
	file.open("C:\New folder");
	string name;
	int marks;
	file>>name>>marks;
	cout<<"Name: "<<name<<endl;
	cout<<"Marks: "<<marks<<endl;
	file.close();
	return 0;
}
