#include<iostream>
using namespace std;

class Animal{
  public:
  void speak(){
    cout<<"parent"<<endl;
  }
};
class dog: public Animal{
 public:
 void speak(){
    cout<<"child"<<endl;
 }
};

int main(){
    dog obj;
    obj.speak();
}
