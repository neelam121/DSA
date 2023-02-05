#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(Node *&head,int val){
    Node *n=new Node(val);
    n->next=head;
    head=n;
}
void insertAtTail(Node *&head,int val){
    Node *n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(Node *head,int key){
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(Node * &head){
    Node *toDelete=head;
    head=head->next;
    delete toDelete;
}
void deletion1(Node * &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    Node *temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    Node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,3);
    //deletion1(head,3);
    //display(head);
    deleteAtHead(head);
    cout<<endl;
    display(head);
    return 0;
}
