#include<iostream>
using namespace std;
class Students{
    int age;
    public: 
 
    Students(int age=20){
        this->age=age;
    }
    Students(const Students &s){
        age=s.age;
    }
    ~Students(){
        cout<<"distructor called"<<endl;
    }    void display(){
        cout<<age<<" ";
    }
 
};
int main(){
    Students s1;
    Students s2;
    Students s3(40);
    Students s4(s1);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}
