// Multiple Inheritance program
#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
};
class Male{ 
    public:
    string gender;
};
class child: public Human, public Male{
};
int main(){
    child ob;
    cout<<ob.age<<endl;
    cout<<ob.gender;
    return 0;
}