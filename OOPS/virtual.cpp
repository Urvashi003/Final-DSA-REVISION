#include<iostream>
using namespace std;

class Person{
    public:
    virtual void Hello(){
        cout<<"heyaa"<<endl;
    }
};

class Child: public Person{
    public:
    void Hello(){
        cout<<"chiyaa"<<endl;
    }
};

int main(){
    Child c1;
    c1.Hello();
}
