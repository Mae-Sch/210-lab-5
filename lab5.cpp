#include <iostream>
#include <iomanip>

using namespace std;

void enterArrayData(double*, int);
void outputArrayData(double*, int);

int main() {

    const int SIZE = 5;
    double *arrayptr = nullptr;
    arrayptr = new double[SIZE];

    enterArrayData(arrayptr, SIZE);
    outputArrayData(arrayptr, SIZE);

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

void outputArrayData(double *array, int size) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
