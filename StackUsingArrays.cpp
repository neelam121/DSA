#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Stacks{
    public:
    int *arr;
    int top;
    int size;
    Stacks(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout<<"Stack Overflow"<<endl;
      }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }
    int peek(){
        if(top>=0&&top<size){
       return arr[top];
    }
    else{
    cout<<"Stack is Empty"<<endl;
    }
    }
    bool empty(){
      if(top==-1){
        return true;
      }
      else{
        return false;
      }
    }
};
int main(){
    Stacks st(5);
    st.push(22);
    st.push(43);
    st.push(56);
    cout<< st.peek() <<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
   cout<<st.empty() <<endl;
}