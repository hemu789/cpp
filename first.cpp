#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *n1 = new Node(5);
    Node *head = n1;
    Node *tail = n1;
    // cout << "Insert at head " << endl;

    // insertAtHead(head, 10);

    // insertAtHead(head, 15);

    // insertAtHead(head, 20);

    // print(head);
    cout<<endl;
    cout << "Insert at Tail " << endl;

    insertAtTail(tail, 25);
    insertAtTail(tail, 30);

    print(head);
    return 0;
}