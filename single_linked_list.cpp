#include "single_linked_list.h"
#include <iostream>

// Node class implementation
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

// Single_Linked_List class implementation
Single_Linked_List::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

Single_Linked_List::~Single_Linked_List() {
    // Implement destructor to free memory
}

void Single_Linked_List::push_front(int data) {
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
    if (!tail) {
        tail = new_node;
    }
    num_items++;
}

void Single_Linked_List::push_back(int data) {
    Node* new_node = new Node(data);
    if (!head) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

void Single_Linked_List::pop_front() {
    if (!head) {
        std::cerr << "Error: Trying to pop from an empty list\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    num_items--;

    if (!head) {
        tail = nullptr; // The list is now empty
    }
}

void Single_Linked_List::pop_back() {
    if (!head) {
        std::cerr << "Error: Trying to pop from an empty list\n";
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = nullptr;
    } else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }

        delete tail;
        tail = current;
        tail->next = nullptr;
    }

    num_items--;
}

int Single_Linked_List::front() const {
    if (!head) {
        std::cerr << "Error: The list is empty\n";
        return -1; 
    }
    return head->data;
}

int Single_Linked_List::back() const {
    if (!tail) {
        std::cerr << "Error: The list is empty\n";
        return -1; 
    }
    return tail->data;
}

bool Single_Linked_List::empty() const {
    return num_items == 0;
}

void Single_Linked_List::insert(size_t index, const int& item) {
    if (index == 0 || !head) {
        push_front(item);
    } else if (index >= num_items) {
        push_back(item);
    } else {
        Node* new_node = new Node(item);
        Node* current = head;

        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;

        num_items++;
    }
}

bool Single_Linked_List::remove(size_t index) {
    if (index >= num_items || !head) {
        return false; // Index is beyond the end of the list or the list is empty
    }

    if (index == 0) {
        pop_front();
    } else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;

        if (!current->next) {
            tail = current; // Update tail if the last element is removed
        }

        num_items--;
    }

    return true;
}

size_t Single_Linked_List::find(const int& item) {
    Node* current = head;
    size_t index = 0;

    while (current) {
        if (current->data == item) {
            return index;
        }
        current = current->next;
        index++;
    }

    return num_items; // Return the size of the list if the item is not found
}

size_t Single_Linked_List::size() const {
    return num_items;
}

void Single_Linked_List::display() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
