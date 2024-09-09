#include<iostream>
using namespace std;
class Person{
  string name;
  int age;

  public:
  void setValue(string str, int val){
    name= str;
    age=val;
  }
  void getValue(){
    cout<<name<<" "<<age<<endl;
  }
};

int main(){
    string str;
    int val;
    cin>>str;
    cin>>val;

    Person A;
    A.setValue(str,val);
    A.getValue();
}