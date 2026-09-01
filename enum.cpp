#include<iostream>
using namespace std;
#define Pi 3.14159
enum Day{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
enum Month {
    January = 1,
    February,
    March,
    April
};
enum Marks {
    A = 90,
    B = 80,
    C = 70,
    D = 60
};
enum TrafficLight {
    Red,
    Yellow,
    Green
};
int main(){
	Day t=Wednesday;
	cout<<t<<endl;
	cout << April << endl;
	cout<<B<<endl;
	 TrafficLight signal = Green;

    if (signal == Green){
	
        cout << "Go"<<endl;}
    else if (signal == Yellow){
        cout << "Wait"<<endl;}
    else{
	
        cout << "Stop";}
        //SYMBOLIC CONSTANT
        int r=10;
        float area = r * r*Pi;
        cout<<area<<endl;
        /*refernce variable= A reference cannot be NULL.
Once a reference is bound to a variable, it cannot refer to another variable.
A reference does not occupy separate memory for the referred value.*/
        int x = 10;
    	int &y = x;

    y = 50;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
