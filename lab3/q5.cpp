#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = nullptr;
struct node *CreateNode(int value);
void InsertAtBeg(int value);
void InsertAtEnd(int value);
void InsertAfterNode(int value, int after);
void InsertBeforeNode(int value, int before);
void DeleteFromBeg();
void DeleteFromEnd();
void Display();
int main()
{
    int choice = 0, value, after, before;
    while (choice != 8)
    {
        cout << "\n\n************ MAIN MENU (CPP) ************";
        cout << "\n1 : Add a node at Beginning";
        cout << "\n2 : Add a node at the End";
        cout << "\n3 : Add a node after a Node";
        cout << "\n4 : Add a node before a node";
        cout << "\n5 : Delete a node from the Beginning";
        cout << "\n6 : Delete a node from the End";
        cout << "\n7 : Display the Linked List";
        cout << "\n8 : END the Operation !!!";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1: 
            cout << "Enter Value to Add : ";
            cin >> value;
            InsertAtBeg(value);
            cout << "\nNode Added at the Beginning.";
            break;

        case 2:
            cout << "Enter Value to Add : ";
            cin >> value;
            InsertAtEnd(value);
            cout << "\nNode Added at the End.";
            break;

        case 3:
            cout << "Enter Value to Add : ";
            cin >> value;
            cout << "Enter the Value of node coming before the new node : ";
            cin >> after;
            InsertAfterNode(value, after);
            cout << "\nNode Added after the node having value " << after << ".";
            break;

        case 4:
            cout << "Enter Value to Add : ";
            cin >> value;
            cout << "Enter the Value of node coming after the new node : ";
            cin >> before;
            InsertBeforeNode(value, before);
            cout << "\nNode Added before the node having value " << before << ".";
            break;

        case 5:
            DeleteFromBeg();
            cout << "\nNode Deleted from the Beginning.";
            break;

        case 6:
            DeleteFromEnd();
            cout << "\nNode Deleted from the End.";
            break;

        case 7: 
            cout << "\nLinked List : ";
            Display();
            break;

        case 8:
            cout << "\nExit !!!";
            break;

        default:
            cout << "\nInvalid option, Try again.";
            break;
        }
    }
    return 0;
}

struct node *CreateNode(int value) 
{
    struct node *newNode = new node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void InsertAtBeg(int value) 
{
    struct node *new_node = CreateNode(value);
    new_node->next = head;
    head = new_node;
}

void InsertAtEnd(int value)
{
    struct node *new_node = CreateNode(value);

    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

void InsertAfterNode(int value, int after)
{
    struct node *new_node = CreateNode(value);
    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr != nullptr && ptr->data != after)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void InsertBeforeNode(int value, int before)
{
    struct node *new_node = CreateNode(value);
    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != nullptr && ptr->next->data != before)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void DeleteFromBeg()
{
    if (head == nullptr)
    {
        cout << "\nEmpty List !!!";
        return;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}

void DeleteFromEnd() 
{
    if (head == nullptr)
    {
        cout << "\nEmpty List !!!";
        return;
    }
    struct node *ptr = head;
    while (ptr->next->next != nullptr)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = nullptr;
}

void Display()
{
    int count = 0; 
    struct node *ptr = head;
    if (ptr == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }
    while (ptr != nullptr)
    {
        cout << ptr->data << " -> ";
        count++;
        ptr = ptr->next;
    }
    cout << "END !!\n";
    cout << "Total number of nodes : " << count;
}