#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of two integers " << a << " and " << b << " is: " << (a + b) << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of two floats " << a << " and " << b << " is: " << (a + b) << endl;
    }

    Sum(char a, char b) {
        cout << "Sum of two characters '" << a << "' and '" << b << "' (using ASCII values) is: " << (a + b) << endl;
    }
};

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 2.5, float2 = 3.5;
    char char1 = 'A', char2 = 'B';

    Sum sumInt(int1, int2);   
    Sum sumFloat(float1, float2);  
    Sum sumChar(char1, char2);   

    return 0;
}
