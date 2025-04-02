#include<iostream>
using namespace std;
class A{
    int a;
    string b;
    float c;
};
class B{
    // Empty class 
};
int main(){
    A ob1; // object declaration of class A
    B ob2; // object declaration of empty class 
    cout<< "size : " << sizeof (ob1)<< endl;
    cout<< "size : " << sizeof (ob2)<< endl;
}
