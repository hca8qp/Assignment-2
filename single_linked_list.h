#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
#include <cstddef> 

class Node {
public:
    int data;
    Node* next;

    Node(int data);
};

class Single_Linked_List {
private:
    Node* head;
    Node* tail;
    int num_items;

public:
    Single_Linked_List();
    ~Single_Linked_List(); // A destructor to free memory if needed
    void push_front(int data);
    void push_back(int data);
    void pop_front();
    void pop_back();
    int front() const; // Return the value of the front element
    int back() const;  // Return the value of the back element
    bool empty() const; // Check if the list is empty
    void insert(size_t index, const int& item); // Insert item at position index
    bool remove(size_t index);
    size_t find(const int& item);
    size_t size() const; // Return the number of elements in the linked list.
    void display();
};

#endif // SINGLE_LINKED_LIST_H
