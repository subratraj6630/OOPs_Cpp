#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public:
    A(){
        a=10,b=5;
    }
    friend class B;
};
class B{
    public:
    void fun(A &ob){
        cout<<ob.a<<endl;
        cout<<ob.b<<endl;
    }
};
int main(){
    A ob1;
    B ob2;
    ob2.fun(ob1);
}
 