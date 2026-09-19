#include<iostream>
using namespace std;
class student{
	string name;
	int m;
	double marks[5];
	public:
	void setData(string n,int i,double a,double b,double c,double d,double e){
			name=n;
			m=i;
			marks[1]=a;
			marks[2]=b;
			marks[3]=c;
			marks[4]=d;
			marks[5]=e;
		}
		void display(){
			double sum=0;
			for(int j=0;j<m;j++){
			sum+=marks[j];
			}
			double avg=sum/m;
			cout<<"AVERAGE: "<<avg;
		}
};
int main(){
	student s1,s2,s3;
	student* p1=&s1;
	student* p2=&s2;
	student* p3=&s3;
	for(int i=0;i<3;i++){
		string n;
		int m;
		double a,b,c,d,e;
		cin>>n>>m>>a>>b>>c>>d>>e;
		if(i==0){
			p1->setData(n, m, a, b, c, d, e);
		}else if(i==1){
			p2->setData(n, m, a, b, c, d, e);
		}else if(i==2){
			p3->setData(n, m, a, b, c, d, e);
		}
		}cout<<"Student Details"<<endl;
		p1->display();
		p2->display();
		p3->display();
}

