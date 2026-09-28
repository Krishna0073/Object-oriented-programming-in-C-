#include<iostream>
using namespace std;
class Age{
	int age;
	public:
		void setAge(int age){
			this->age=age;
		}
		void getAge(){
			cout<<this->age;
		}
};
int main(){
	Age a1;
	a1.setAge(20);
	a1.getAge();
}
