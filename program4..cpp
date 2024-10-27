#include <iostream>
using namespace std;

class Numbers {
protected:
    int num1, num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}
};

class Product : public Numbers {
public:
    Product(int a, int b) : Numbers(a, b) {}

    void displayProduct() {
        int product = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Product prod(a, b);

    prod.displayProduct();

    return 0;
}
