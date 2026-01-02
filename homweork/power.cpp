#include<iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {

    int num = 8;
    bool isPower = false;

    for(int i = 0; i < 30; i++) {
        if(power(2, i) == num) {
            isPower = true;
            break;
        }
    }

    if(isPower)
        cout << "Yes, it is a power of 2" << endl;
    else
        cout << "No, it is not a power of 2" << endl;

    return 0;
}
