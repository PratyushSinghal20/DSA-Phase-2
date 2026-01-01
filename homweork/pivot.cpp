#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int total = 0;
    int left = 0;

    for (int i = 0; i <n ; i++) {
        total+= arr[i];
    }

    for(int i = 0; i < n; i++) {
        total -= arr[i];

        if (left == total) {
            cout << "Pivot index is: " << i << endl;
            return 0;
        }

        left += arr[i];
    }
    cout << "No pivot index found" << endl;
    return 0;
}