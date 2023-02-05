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
class queue{
    Node* front;
    Node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        Node *n=new Node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"queue underflow"<<endl;
            return;
        }
        Node *todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
         if(front==NULL){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL)
        return true;
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;//if it returns 1,that means queue is empty otherwise queue is not empty.

}