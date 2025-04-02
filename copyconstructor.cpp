#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string name,int roll){ // two parametrizrd constructor
        this->name = name;
        this->roll = roll;
    }
    student(student &temp){ // copy constructor
        cout<<"Copy constructor called"<<endl;
        this->name = temp.name;
        this->roll = temp.roll;
   }
    student(){ // 0 parametrized constructor
    }
    void print(){
        cout<<name<<endl<<roll<<endl;
    }
};
int main(){
    student x("Subrat",1);
    x.print();
    student y(x); // copy constructor called
    y.print();
    y.roll = 4;
    x.print();
    y.print();
    student *z = new student;
    z->print();
    z->name = "Shivam";
    z->roll = 2;
    z->print();
}