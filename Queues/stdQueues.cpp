    #include <iostream>
#include <queue> // For std::queue
using namespace std;

int main() {
    queue<string> myQueue;
    myQueue.push("Apple"); // Add element to back
    myQueue.push("Banana");
    cout << "Front element: " << myQueue.front() << endl; // Access front
    myQueue.pop(); // Remove front element
    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;
    return 0;
}
