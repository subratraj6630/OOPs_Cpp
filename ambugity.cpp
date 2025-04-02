#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"B"<<endl;
    }
};
class D: public A,public B{
    public:
};
int main(){
    D ob;
    ob.A::fun(); // ambugity resolving
    ob.B::fun();
}