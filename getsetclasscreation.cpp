#include<iostream>
using namespace std;
class Hero{
    private:
    char level;
    public:
    int health; 
    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    Hero h1;
    h1.health = 200;
     h1.setLevel('A');
    cout<<h1.health<<endl;
    cout<<"h1 level is "<<h1.getLevel()<<endl;
    cout<<sizeof(h1);
    return 0;
}