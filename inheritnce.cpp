// Inheritance program
#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    int get(){
        return this->age;
    }
    void set(int age){
        this->age = age;
    }
};
class Male:protected Human{ // publically inherit the Human class
    public:
    string color;
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    int get(){
        return this->age;
    }
    void set(int age){
        this->age = age;
    }
};
int main(){
    Male ob1;
    ob1.set(10);
    cout<<ob1.get()<<endl;
    cout<<ob1.color<<endl;
    ob1.sleep();
    ob1.set(19);
    cout<<ob1.get();
    return 0;
}