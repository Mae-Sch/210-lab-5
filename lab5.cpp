#include <iostream>
#include <iomanip>

using namespace std;

// functions are all passed an int for the size of the array, 
// because arrays do not know their own size
void enterArrayData(double*, int);
void outputArrayData(double*, int);
void sumArray(double*, int);

int main() {

    const int SIZE = 5;
    double *arrayptr = nullptr;
    arrayptr = new double[SIZE];

    enterArrayData(arrayptr, SIZE);
    outputArrayData(arrayptr, SIZE);
    sumArray(arrayptr, SIZE);

    return 0;
}

void enterArrayData(double *array, int size) {
    cout << "Data Entry for the Array:\n";
    // iterates through entire array
    for (int i = 0; i < size; ++i) {
        cout << setw(20) << "> Element #" << i << ": ";
        cin >> array[i];
    }
    cout << "Data entry complete\n";
}

void outputArrayData(double *array, int size) {
    cout << "Outputting array elements: ";
    // iterates through entire array
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sumArray(double *array, int size) {
    cout << "Sum of values: ";
    float sum = 0;
    // iterates through entire array
    for (int i = 0; i < size; ++i) {
        sum+= array[i];
    }
    cout << sum << endl;
}
