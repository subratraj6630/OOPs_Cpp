#include<iostream>
using namespace std;
class A{  // A is called abstract class as it have pure virtual function
    public:
    void virtual fun() = 0;
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
