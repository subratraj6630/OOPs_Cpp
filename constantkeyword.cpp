#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    static int sem; // static keyword
    const string branch = "IT"; // constant keyword
    student(string name,int roll){ // two parametrizrd constructor
        this->name = name;
        this->roll = roll;
    }
    student(student &temp){ // copy constructor
        cout<<"Copy constructor called"<<endl;
        this->name = temp.name;
        this->roll = temp.roll;
    }
    ~student(){ // destructor
        cout<<"destructor called"<<endl;
    }
    student(){ // 0 parametrized constructor
    }
    void print(){
        cout<<name<<endl<<roll<<endl<<sem<<endl<<branch<<endl;
    }
};
int student::sem = 4; // static keyword initialisation
int main(){
    student x("Subrat",1);
    x.print();
    student y(x); // copy constructor called
    y.print();
    student *z = new student;
    z->print();
    z->name = "Shivam";
    z->roll = 2;
    z->print();
    delete z; // destructor called manually for dynamic allocated object
    cout<<student::sem<<endl;
}