#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    // Add element to stack
    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = element;
    }
    // Remove top element
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    // Check top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop is " << s.peek() << endl;
    return 0;
}