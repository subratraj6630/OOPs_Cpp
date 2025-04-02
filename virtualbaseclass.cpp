#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class B:virtual public A{
    public:
};
class C:virtual public A{
};
class D: public B,public C{
    public:
};
int main(){
    D ob;
    // ob.B::fun(); // ambugity resolving
    // ob.C::fun();
    ob.a =10;
    ob.a =100;
    cout<<ob.a<<endl;
}

