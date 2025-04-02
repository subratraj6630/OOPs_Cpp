#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"A"<<endl;
    }
};
class B:public A{
    public:
    void fun(){
        cout<<"B"<<endl;
    }
};
int main(){
    B ob;
    ob.A::fun();
    ob.B::fun();
    ob.fun();
}
