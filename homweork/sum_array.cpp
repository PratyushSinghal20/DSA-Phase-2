#include<iostream>
using namespace std;

int main() {

    int sum = 0;
    int arr[] = {2 , 7 , 1 , -4 , 11};

    for(int i = 0; i <4; i++) {
        sum += arr[i];
    }


    cout << "Sum of first four elements: " << sum << endl;
    return 0;
}