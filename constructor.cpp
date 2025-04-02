#include<iostream>
using namespace std;
class Hero{
    private:
    char level;
    public:
    int health; 
    // constructor
    Hero(){
        cout<<"constructor called"<<endl;
    }
    // parametrized constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl; // this keyword
        this->health = health;
    }
    // get set function
    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    Hero ramesh(10);
    Hero *suresh = new Hero;// dynamic memory allocation
  cout<<"adress of ramesh "<< &ramesh<<endl;
     ramesh.setLevel('A');
    cout<<ramesh.health<<endl;
    cout<<"h1 level is "<<ramesh.getLevel()<<endl;
    cout<<sizeof(ramesh);
    return 0;
}