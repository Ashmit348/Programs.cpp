#include <iostream>
using namespace std;

class ArraySum {
    int *arr;
    int size;
    int sum;

public:
    ArraySum(int *inputArr, int arrSize) {
        size = arrSize;
        arr = new int[size];
        sum = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
    }

    // Copy constructor
    ArraySum(const ArraySum &obj) {
        size = obj.size;
        arr = new int[size];
        sum = obj.sum;
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    void displaySum() const {
        cout << "The sum of all positive numbers in the array is: " << sum << endl;
    }

    ~ArraySum() {
        delete[] arr;  
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *inputArr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> inputArr[i];
    }

    ArraySum original(inputArr, size);

    ArraySum copyObj = original;
    copyObj.displaySum();

    delete[] inputArr; 
    return 0;
}
