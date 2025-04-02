#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void fun(){
        cout<<"Hello"<<endl;
    }
    void fun(char x){
        cout<<"function oveloaded"<<endl;
    }
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
    ob.fun();
    ob.fun('a');
}

