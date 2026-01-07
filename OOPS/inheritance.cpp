#include<iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    int getAge() {
        return this->age;
    }
    int getWeight() {
        return this->weight;
    }
};

class Male : public Human {

    public :
    string color;

    void sleep() {
        cout << "Male is sleeping" << endl;

}
};

int main()
{
    Male obj;
    obj.height = 6;
    obj.weight = 70;    
    obj.age = 22;
    obj.color = "Fair";

    cout << "Height: " << obj.height << endl;
    cout << "Weight: " << obj.getWeight() << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Color: " << obj.color << endl;

    obj.sleep();

    return 0;

}

