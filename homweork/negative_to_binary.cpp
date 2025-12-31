#include <iostream>
using namespace std;

void printBinary(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {

    int num = -6;  

    
    int n;
    if (num < 0) {
        n = -num;
    } else {
        n = num;
    }

    
    int bin[8] = {0};
    int i = 7;

    while(n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i--;
    }

    cout << "Binary of +6: ";
    printBinary(bin, 8);

    
    for(int i = 0; i < 8; i++) {
        if (bin[i] == 0)
            bin[i] = 1;
        else
            bin[i] = 0;
    }

    cout << "After 1's complement: ";
    printBinary(bin, 8);

    
    for(int i = 7; i >= 0; i--) {
        if (bin[i] == 0) {
            bin[i] = 1;
            break;
        } else {
            bin[i] = 0;
        }
    }

    cout << "After 2's complement: ";
    printBinary(bin, 8);

    
    if (bin[0] == 1) {
        cout << "First bit is 1 → number is NEGATIVE" << endl;
    }

    
    for(int i = 0; i < 8; i++) {
        if (bin[i] == 0)
            bin[i] = 1;
        else
            bin[i] = 0;
    }

    for(int i = 7; i >= 0; i--) {
        if (bin[i] == 0) {
            bin[i] = 1;
            break;
        } else {
            bin[i] = 0;
        }
    }

    cout << "After again 2's complement: ";
    printBinary(bin, 8);

    return 0;
}
