#include <iostream>
#include <iomanip>

using namespace std;

void enterArrayData(double*, int);

int main() {

    const int SIZE = 5;
    double *arrayptr = nullptr;
    arrayptr = new double[SIZE];

    enterArrayData(arrayptr, SIZE);
    // testing code
    for (int i = 0; i < SIZE; ++i) {
        cout << arrayptr[i] << endl;
    }

    return 0;
}

void enterArrayData(double *array, int size) {
    cout << "Data Entry for the Array:\n";
    for (int i = 0; i < size; ++i) {
        cout << setw(20) << "> Element #" << i << ": ";
        cin >> array[i];
    }
    cout << "Data entry complete\n";
}


