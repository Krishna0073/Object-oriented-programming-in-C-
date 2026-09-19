#include<iostream>
using namespace std;
void billing(void *p, void *q){
	double price=*(double*)p;
	int qty=*(int*)q;
	double total=price*qty;
	int discount;
	if(total >= 5000){
		discount=15;
		}
		else if(total >= 2000){
			discount=10;
		}
		else if(total>=500){
			discount=5;
		}else{
			discount=0;
		}
		double discountrate=total*discount/100;
		double final=total-discountrate;
		cout<<"Total: "<<total<<endl;
		cout<<"Discount: "<<discount<<endl;
		cout<<"Final Amount: "<<final<<endl;

}

int main(){
	double pr;
	int qn;
	cin>>pr>>qn;
	billing(&pr,&qn);
}
