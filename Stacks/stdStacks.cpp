#include <iostream>
#include <stack> // For std::stack
using namespace std;

int main() {
    stack<int> myStack;
    myStack.push(10); // Add element
    myStack.push(20);
    cout << "Top element: " << myStack.top() << endl; // Access top
    myStack.pop(); // Remove top element
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;
    return 0;
}
