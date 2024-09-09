#include<iostream>
using namespace std;

 class Shape{
  virtual void draw()= 0; //pure virtual func
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"draw"<<endl;
    }
};


int main(){
  Circle C1;
  C1.draw();
}