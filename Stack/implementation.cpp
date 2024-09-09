#include<bits/stdc++.h>
using namespace std;
class Stack{
    //prop
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size= size;
        arr= new int[size];
        top= -1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]= ele;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else return false;
    }

};

int main(){
   Stack st(5);
   st.push(9);
   st.push(8);
   st.push(7);
   st.push(6);
   st.push(5);
   
   cout<<st.peek();
   st.push(9);
   
}