// Encapsulation program
#include<iostream>
using namespace std;
class student{
    int roll = 3;
    public:
    string name = "SUBRAT";
    void print(){
        cout<<name<<endl<<roll<<endl;
    }
    int get(){
        return this->roll;
    }
    void set(int roll){
        this->roll = roll;
    }
};
int main(){
    student x;
    x.print();
    x.set(10);
    x.print();
}