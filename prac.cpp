#include <iostream>
using namespace std;

// Define the Node structure.
struct Node {
    int data;
    Node* next;
};

// Function to traverse the linked list starting from the header's next node.
void traverseHeaderLinkedList(Node* header) {
    if (header == nullptr || header->next == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = header->next;  // Start from the first real node.
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a dummy header node.
    Node* header = new Node;
    header->next = nullptr;  // Initially, the list is empty.
    
    // Create some nodes.
    Node* n1 = new Node{1, nullptr};
    Node* n2 = new Node{2, nullptr};
    Node* n3 = new Node{3, nullptr};
    
    // Link nodes to form the list: header -> n1 -> n2 -> n3.
    header->next = n1;
    n1->next = n2;
    n2->next = n3;
    
    // Traverse and print the list.
    traverseHeaderLinkedList(header);
    
    // Free allocated memory.
    delete n3;
    delete n2;
    delete n1;
    delete header;
    
    return 0;
}