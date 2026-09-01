#include<iostream>
#include<vector>
using namespace std;
class Chai{
	public:
		string Teaname;
		int serving;
		vector<string> ingredients;
		void Displaydata(){
			cout<<"Teaname: "<<Teaname<<endl;
			cout<<"serving: "<<serving<<endl;
			cout<<"Ingredients: ";
			for(string ingredient:ingredients){
				cout<<ingredient<<" ";
			}
		}
};
int main(){
	Chai chaiOne;
	chaiOne.Teaname="lemon tea";
	chaiOne.serving=2;
	chaiOne.ingredients={"lemon","water","Tea"};
	chaiOne.Displaydata();
}
