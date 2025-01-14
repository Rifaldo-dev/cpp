#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    int i = 0, j, tmp;
    while (i < n) { 
        j = 0;
        while (j < n - i - 1) {
            if (arr[j] < arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j++; 
        }
        i++; 
    }
}

int main() {
    int array[100], n;

    cout << "Masukkan banyak elemen: ";
    cin >> n;

    cout << "Masukkan nilai: \n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bubbleSort(array, n);

    cout << "Hasil pengurutan secara descending:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}

