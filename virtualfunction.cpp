#include<iostream>
using namespace std;
class A{
    public:
    void virtual fun(){
        cout<<"A"<<endl;
    }
};
class B:public A{
    public:
    void virtual fun(){
        cout<<"B"<<endl;
    }
};
int main(){
    B ob;
    ob.fun();
    ob.A::fun();
}
