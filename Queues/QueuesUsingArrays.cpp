#include <iostream>
using namespace std;
class Queue {
    int *arr;
    int front, rear, capacity, size;
public:
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        this->size = 0;
    }
    // Add element to queue
    void enqueue(int element) {
        if (size == capacity) {
            cout << "Queue Full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = element;
        size++;
    }
    // Remove element from queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return -1;
        }
        int element = arr[front];
        front = (front + 1) % capacity;
        size--;
        return element;
    }
    // Check front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
    // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }
};
int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front element is " << q.getFront() << endl;
    q.dequeue();
    cout << "Front element after dequeue is " << q.getFront() << endl;
    return 0;
}