#include<iostream>
using namespace std;
class A{
    public:
    int a = 10,b = 12;
    void display(){
        cout<<a<<b<<endl;
    }
};
class B:public A{
    public:
    int c = 5,d = 4;
    void display(){
        cout<<c<<d<<endl;
    }
};
int main(){
    B ob;
    A ob1 = ob;
    ob1.display();
}