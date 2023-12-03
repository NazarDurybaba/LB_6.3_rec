#include <iostream>

using namespace std;


int sumEven(int arr[], int size, int index = 0) {
    if (index == size) {
        return 0;
    }
    if (arr[index] % 2 == 0) {
        return arr[index] + sumEven(arr, size, index + 1);
    }
    else {
        return sumEven(arr, size, index + 1);
    }
}


void printArray(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }
    printf("%2d ", arr[index]);
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Masyv: ";
    printArray(arr, size);
    printf("\nSum of even: %2d\n", sumEven(arr, size));
    return 0;
}
