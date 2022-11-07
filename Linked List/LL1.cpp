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


// Insert at head
void insert(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void TailInsert(Node* &tail , int d){
    Node *temp=new Node(d);

    tail->next=temp;
    tail=temp;

}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{

    // Insert At Head
    Node *n1 = new Node(1);
    Node *head = n1;
    Node* tail=n1;
    insert(head, 10);
    insert(head, 25);
    print(head);
    cout<<endl;


    // Insert At Tail
    TailInsert(tail,20);
    TailInsert(tail, 50);
    TailInsert(tail, 75);
    TailInsert(tail, 80);

    print(head);
    return 0;
}