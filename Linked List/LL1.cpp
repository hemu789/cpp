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


// Insert at position
void insertAtPost(Node *head, int pos, int d){

    int cnt=1;
    //index start 1 se
    while(cnt<pos-1){
        head=head->next;
        cnt++;
    }

    //Node for data
    Node *temp=new Node(d);

    temp->next= head->next;
    head->next=temp;


}
// Insert at tail
void TailInsert(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

// Length of ll
int getLen(Node *head)
{

    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// Print the ll
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
    Node *tail = n1;
    insert(head, 10);
    insert(head, 25);
    print(head);
    cout << endl;

    // Insert At Tail
    TailInsert(tail, 20);
    TailInsert(tail, 50);
    TailInsert(tail, 75);
    TailInsert(tail, 80);

    print(head);
    cout<<endl;

    cout << getLen(head) << endl;

    insertAtPost(head,3,29);
    print(head);
    cout << endl;

    cout << getLen(head) << endl;

    return 0;
}