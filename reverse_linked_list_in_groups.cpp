// Reverse the linked list in groups
#include <iostream>
#include <algorithm>

struct Node* reverseInGroups(struct Node* head, int k);
void reverse(struct Node** head);
void print_node(struct Node* head);

struct Node
{
    int data;
    Node* next;

    Node(int x)
    { 
        data = x;
        next = nullptr;
    }
};
void reverse(struct Node** head)
{
    Node* current = *head;
    Node* next_ptr = nullptr;
    Node* prev_ptr = nullptr;

    while (current != nullptr)
    {
        next_ptr = current->next;
        current->next = prev_ptr;
        prev_ptr = current;
        current = next_ptr;
    }
    *head = prev_ptr;
}

// function to print the node
void print_node(struct Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " --> ";
        current = current->next;
    }
    std::cout << "N" << std::endl;
}
struct Node* reverseInGroups(struct Node* head, int k)
{
    if (head == nullptr)
    {
        return head;
    }
    Node* current = head;
    Node* next_ptr = nullptr;
    Node* prev_ptr = nullptr;
    int count = 0;
    while (count < k && current != nullptr)
    {
        next_ptr = current->next;
        current->next = prev_ptr;
        prev_ptr = current;
        current = next_ptr;
        count++;
    }
    if (next_ptr != nullptr)
    {
        head->next = reverseInGroups(next_ptr, k);
    }
    return prev_ptr;
}

int main()
{
    struct Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);


    
    print_node(head);
    head = reverseInGroups(head, 3);

    print_node(head);

    return 0;
}
