#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "This is class B, derived from class A" << endl;
    }
};
class C : public A {
public:
    void displayC() {
        cout << "This is class C, derived from class A" << endl;
    }
};

class D : public A {
public:
    void displayD() {
        cout << "This is class D, derived from class A" << endl;
    }
};

class E : public B {
public:
    void displayE() {
        cout << "This is class E, derived from class B" << endl;
    }
};

int main() {
    B objB;
    C objC;
    D objD;
    E objE;

    cout << "Using object of class B:" << endl;
    objB.displayA();
    objB.displayB();

    cout << "\nUsing object of class C:" << endl;
    objC.displayA();
    objC.displayC();

    cout << "\nUsing object of class D:" << endl;
    objD.displayA();
    objD.displayD();

    cout << "\nUsing object of class E:" << endl;
    objE.displayA();
    objE.displayB();
    objE.displayE();

    return 0;
}
