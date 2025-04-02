#include<iostream>
using namespace std;
class student{
    int roll = 3;
    public:
    string name = "SUBRAT";
    void print(){
        cout<<name<<endl<<roll<<endl;
    }
};
int main(){
    student x;
    x.print();
    x.name = "SHIVAM";
    // x.roll = 4;  gives error
    x.print();
}