#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = new Node();  // Create a new node
    new_node->data = new_data;           // Assign data to the node
    new_node->next = head;               // Set the new node's next to current head
    head = new_node;                     // Move the head to point to the new node
}

void insertAtSpecificPosition(int new_data, int position) {
    struct Node* new_node = new Node();  // Create a new node
    struct Node* temp = head;            // Start from the head
    new_node->data = new_data;           // Set data for the new node
    new_node->next = NULL;               // Set next to NULL

    // Insert at the beginning if position is 0
    if (position == 0) {
        new_node->next = head;
        head = new_node;
        return;
    }

    // Traverse to the node before the desired position
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }

    // Insert the new node at the given position
    new_node->next = temp->next;
    temp->next = new_node;
}

void insertAtEnd(int new_data) {
    struct Node* new_node = new Node();  // Create a new node
    struct Node* temp = head;            // Start from the head
    new_node->data = new_data;           // Set data for the new node
    new_node->next = NULL;               // Set next to NULL (end of list)

    // If the list is empty, make the new node the head
    if (head == NULL) {
        head = new_node;
        return;
    }

    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = new_node;
}

void display() {
    struct Node* ptr = head;  // Pointer to the head of the list
    while (ptr != NULL) {      // Traverse until the end of the list
        cout << ptr->data << " ";  // Print the data of the node
        ptr = ptr->next;           // Move to the next node
    }
    cout << endl;  // Print a newline at the end
}
int main() {
    // Insert nodes at the beginning
    insert(3);
    cout << "After inserting 3 at the beginning: ";
    display();

    insert(1);
    cout << "After inserting 1 at the beginning: ";
    display();

    insert(7);
    cout << "After inserting 7 at the beginning: ";
    display();

    insert(2);
    cout << "After inserting 2 at the beginning: ";
    display();

    insert(9);
    cout << "After inserting 9 at the beginning: ";
    display();

    // Insert a node at a specific position
    insertAtSpecificPosition(5, 2); // Insert 5 at position 2
    cout << "After inserting 5 at position 2: ";
    display();

    // Insert a node at the end
    insertAtEnd(10);
    cout << "After inserting 10 at the end: ";
    display();

    return 0;
}
