// Multi level Inheritance program
#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
};
class Male:public Human{ // male publically inherit the character of human
    public:
    string gender;
};
class child:public Male{ // child publically inherit the character of male
};
int main(){
    Male ob1;
    child ob2;
    cout<<ob1.gender<<endl;
    cout<<ob1.height<<endl;
    cout<<ob2.height<<endl;
    return 0;
}