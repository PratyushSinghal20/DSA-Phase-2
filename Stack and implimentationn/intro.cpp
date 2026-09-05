#include<iostream>
#include<stack>
using namespace std;

class Stack {

    public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

};


int main() {
    /*

    stack<int> s;

    s.push(10);
    s.push(20);
    s.pop();

    cout<<s.top()<<endl; 
    cout<<s.empty()<<endl;

    cout<<s.size()<<endl;

    */

    Stack st(5);

    st.push(10);
    st.push(20);
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    



    return 0;
}