#include <iostream>
#include <cstring>
using namespace std;

class Hero {

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Default Constructor
    Hero() {
        cout << "Default constructor called" << endl;
        name = new char[100];
        name[0] = '\0';
    }

    // Parameterized Constructor
    Hero(int health) {
        this->health = health;
        name = new char[100];
        name[0] = '\0';
    }

    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];
        name[0] = '\0';
    }

    // Copy Constructor (Deep Copy)
    Hero(const Hero& temp) {
        cout << "Copy constructor called" << endl;

        this->health = temp.health;
        this->level = temp.level;

        name = new char[strlen(temp.name) + 1];
        strcpy(name, temp.name);
    }

    // Copy Assignment Operator (Deep Copy)
    Hero& operator=(const Hero& temp) {
        if (this != &temp) {
            delete[] name;   // free old memory

            this->health = temp.health;
            this->level = temp.level;

            name = new char[strlen(temp.name) + 1];
            strcpy(name, temp.name);
        }
        return *this;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(const char name[]) {
        strcpy(this->name, name);
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void print() {
        cout << "[ Name: " << name
             << ", Health: " << health
             << ", Level: " << level << " ]" << endl;
    }

    static int random() {
        return timeToComplete;
    }

    // Destructor
    ~Hero() {
        delete[] name;
        cout << "Destructor called" << endl;
    }
};

// Static member initialization
int Hero::timeToComplete = 5;

int main() {

    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');
    hero1.setName("Babbar");

    Hero hero2(hero1);   // copy constructor
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();      // remains unchanged (deep copy)

    Hero hero3;
    hero3 = hero1;      // copy assignment
    hero3.print();

    cout << "Static value: " << Hero::random() << endl;

    return 0;
}
