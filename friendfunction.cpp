// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class B;

class A {
    
    public:
        // constructor to initialize numA to 12
        A() : numA(12) {}
        
    private:
        int numA;
        
         // friend function declaration
         friend int add(A, B);
};

class B {

    public:
        // constructor to initialize numB to 1
        B() : numB(1) {}
    
    private:
        int numB;
 
        // friend function declaration
        friend int add(A, B);
};

// access members of both classes
int add(A obj1, B obj2) {
    return (obj1.numA + obj2.numB);
}

int main() {
    A objectA;
    B objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}