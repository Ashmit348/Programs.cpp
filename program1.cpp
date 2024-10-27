#include <iostream>
using namespace std;

class SumNatural {
    int n, sum;

public:
    SumNatural() {
        n = 0;
        sum = 0;
    }

    void input() {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    void calculateSum() {
        sum = (n * (n + 1)) / 2;
    }

    void displaySum() const {
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumNatural obj;
    obj.input();
    obj.calculateSum();
    obj.displaySum();
    return 0;
}
