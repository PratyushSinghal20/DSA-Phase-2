#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n + m];
    int i = 0, j = 0, k = 0;

 
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged sorted array: ";
    for (int l = 0; l < n + m; l++) {
        cout << merged[l] << " ";
    }

    cout << endl;
    return 0;
}
