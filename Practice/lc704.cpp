#include<iostream>
using namespace std;

int main() {

    int arr[] = {-1,0,3,5,9,12};
    int target = 9;

    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) -1;
    int mid = i + (j - i) / 2;

    while(i<=j) {
        if(arr[mid] == target) {
            return mid;
    
        }
        else if (arr[mid] < target)
 {
    i = mid+ 1;
 }
    
        else {
            j = mid -1;
    
    }
    return -1;
}
    cout << -1 << endl;

    return 0;
}