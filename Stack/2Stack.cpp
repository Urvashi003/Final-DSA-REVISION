#include<iostream>
using namespace std;

class TwoStack{
  int *arr;
  int top1;
  int top2;
  int size;

  public:
  TwoStack(int s){
    this->size= size;
    arr= new int[s];
    top1= -1;
    top2= s;
  }

  void push1(int x){
    if(top2-top1 >1){
        top1++;
        arr[top1]=x;
    }
  }
  void push2(int x){
    if(top2-top1 > 1){
        top2--;
        arr[top2]=x;
    }
  }

  int pop1(){
    if(top1>=0){
        int ans= arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
  }

  int pop2(){
    if(top2<size){
        int ans= arr[top2];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
  }
};

int main(){
    TwoStack s(4);
    s.push1(8);
    s.push1(8);
    s.push1(4);
    s.push1(8);
 
    s.pop1();

}