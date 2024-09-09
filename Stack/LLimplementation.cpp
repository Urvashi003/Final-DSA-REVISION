#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Stack{
   private:
   Node* top;

   public:
   Stack(){
    top=NULL;
   }
   void push(int x){
    Node* newNode= new Node();
    newNode->data= x;
    newNode->next=top;
    top=newNode;
   }

   void pop(){
    if(top==NULL){
        cout<<"empty"<<endl;
        return;
    }
    Node* temp= top;
    top= top->next;
    delete temp;
   }
   void display(){
    if(top==NULL){
        cout<<"empty"<<endl;
        return;
    }
    Node* temp= top;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
   }
};

int main(){
    Stack s;
    s.push(9);
    s.display();
}