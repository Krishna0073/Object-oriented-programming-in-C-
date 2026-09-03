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
				cout<<ingredient<<" "<<endl;
			}
		}
		friend bool compare(const Chai &chaiOne,const &chaitwo);
};
bool compare(const Chai &chaiOne,const Chai &chaitwo){
	return chaiOne.serving > chaitwo.serving;
}
int main(){
	Chai chaiOne;
	chaiOne.Teaname="lemon tea";
	chaiOne.serving=2;
	chaiOne.ingredients={"lemon","water","Tea"};
	chaiOne.Displaydata();
	Chai chaitwo;
	chaitwo.Teaname="Ginger tea";
	chaitwo.serving=1;
	chaitwo.ingredients={"ginger","Water","honey"};
	if(compare(chaiOne,chaitwo)){
		cout<<"Leamon tea has more servings";
	}
	else{
		cout<<"Ginger tea has more servings";
	}
}
