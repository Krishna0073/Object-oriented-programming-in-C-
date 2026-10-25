#include<iostream>
using namespace std;
class Key{
	public:
		virtual int sum(int a,int b) = 0;
		
		
};
class Engine: public Key{
	public:
		int sum(int a,int b){
			return a+b;
		}
};
int main(){
	Key* k;
	Engine  E;
	k=&E;
	cout<<"Sum of Integer value= "<<k->sum(10,20);
}
