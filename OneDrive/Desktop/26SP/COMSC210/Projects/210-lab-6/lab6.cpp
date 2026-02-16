#include <iostream>
using namespace std;

void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main()
{
    const int SIZE = 5;
    double* arr = new double[SIZE];

    enterArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);

    double total = sumArray(arr, SIZE);
    cout << "Sum of values: " << total << endl;

    delete[] arr;


    return 0;
}

void enterArrayData(double* arr, int size)
{
    cout << "Data Element for array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element" << i << ": ";
        cin >> *(arr + i);
    }

    cout << "Data entry complete";
}

void outputArrayData(double* arr, int size)
{
    cout << "Output array elements: ";
    for (int i = 0 ; i < size; i++)
    {
        cout << *(arr + i) ;
    }
    cout << endl;

    
}

double sumArray(double* arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}