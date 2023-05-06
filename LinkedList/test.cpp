#include <iostream>
#include<vector>
using namespace std;
class Node
{
public:
int data;
Node *next;

Node(int data){
    this->data=data;
    next=0;
}


};


void Print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *addOne(Node *head)

{
    Node *temp = head; // This will go to last digit
    Node *prev = head; // This will point just before all last 9s
    while (temp->next != NULL)
    {
        if (temp->data != 9)
        {
            prev = temp;
        }
        temp = temp->next;
    }
    if (temp->data == 9)
    {
        prev->data += 1; // increse the just before digit and make all the rest 0
        while (prev->next != NULL)
        {
            prev = prev->next;
            prev->data = 0;
        }
    }
    else
    {
        temp->data += 1;
    }
    return head;
}

int main()
{

    Node n1(9);
    Node n2(9);
    Node n3(9);
    Node n4(9);
    Node n5(9);
    Node n6(9);
    Node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    Print(head);
    head=addOne(head);
    Print(head);
}