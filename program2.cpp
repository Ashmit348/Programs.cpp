#include <iostream>
using namespace std;

class SwapNumbers {
    int a, b;

public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }

    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() const {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    SwapNumbers obj(x, y);

    cout << "Before swapping: a = " << x << ", b = " << y << endl;
    obj.swapValues();
    obj.display();

    return 0;
}
