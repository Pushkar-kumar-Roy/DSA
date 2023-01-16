//merge sort for linked list
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
Node* mergeSortedList(Node* head1, Node* head2)
{
    Node* newHead = NULL;
    Node *tail=NULL;
    if (head1->data <= head2->data) {
        newHead = head1;
        head1=head1->next;
    }
    else {
        newHead = head2;
        head2=head2->next;
    }
    tail=newHead;
    
    while(head1!=NULL && head2!=NULL)
    {
        if (head1->data <= head2->data) {
        tail->next = head1;
        head1=head1->next;
    }
    else {
        tail->next = head2;
        head2=head2->next;
    }
    
    tail=tail->next;

    }

    if(head1!=NULL)
    {
        tail->next=head1;
    }
    if(head2!=NULL)
    {
        tail->next=head2;
    }

    return newHead;
}
Node *middle(Node *head) {
    Node *mid = head;
    Node *tail = head->next;
    
    while(mid->next !=NULL && (tail!=NULL && tail->next!=NULL)) {
        mid = mid->next;
        tail = tail->next->next;
    }
    return mid;
}

Node*mergeSort(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node* mid=new Node();
    
    mid=middle(head);

    Node* head2=mid->next;

    mid->next=NULL;

    Node *newHead = mergeSortedList(mergeSort(head),mergeSort(head2));

    return newHead;

} 
void push(Node** head_ref,int newdata)
{
    Node* newNode=new Node();
    newNode->data=newdata;
    newNode->next=(*head_ref);
    (*head_ref)=newNode;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    push(&head,1);
    push(&head,7);
    push(&head,10);
    push(&head,2);
    push(&head,25);
    push(&head,40);
    
    cout<<"Linked list before sorting: "<<endl;
    printList(head);


    Node* newHead=mergeSort(head);

    cout<<"Linked list after sorting: "<<endl;
    printList(newHead);
}
