#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    int add(){
        return a+b;
    }
    int operator+(A &ob){
         int value1 = this->a;
         int value2 = ob.a;
         return value1-value2;
    }
    void operator()(){
        cout<<"  mai minus hu  "<<this->a<<endl;
    }
};
int main(){
    A ob1,ob2;
    ob1.a = 4;
    ob2.a = 5;
   cout<<ob1+ob2<<endl;
   ob1();
}

