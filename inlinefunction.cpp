#include<iostream>
using namespace std;
class A{
    int a,b,add;
    public:
    void get();
    int sum();
};
inline void A::get(){
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
}
inline int A::sum(){
    add = a+b;
    cout<<"sum"<<endl<<add<<endl;
    return add;
}
int main(){
    A ob;
    ob.get();
    ob.sum();
}