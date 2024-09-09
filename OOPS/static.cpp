#include<iostream>
using namespace std;

// void func(){
//     static int x=0;
//     cout<<x<<endl;
//     x++;
// }

// int main(){
//     func();
//     func();
// }

class A{
    public:
    int x;
    void incX(){
        x=x+1;
    }
};

int main(){
    A obj;
    obj.x=0;
    cout<<obj.x<<endl;
    obj.incX();
     obj.incX();

}