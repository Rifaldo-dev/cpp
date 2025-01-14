#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i = 0, j, tmp;
    do {
        j = 0;
        do {
            if (arr[j] < arr[j + 1]) { 
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j++;
        } while (j < n - i - 1);
        i++;
    } while (i < n);
}

int main() {
    int array[100], n, i;
    cout << "Masukkan banyak elemen: ";
    cin >> n;
    cout << "Masukkan nilai: \n";
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    bubbleSort(array, n);
    cout << "Hasil pengurutan secara descending:\n";
    for (i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}

