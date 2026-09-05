#include<iostream>
using namespace std;

class Animal {

    public:

    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

    public:

    void bark() {
        cout << "Barking " << endl;
    }
};

int main() {

    Dog d;
    d.speak();

    return 0;
}