#include<iostream>
using namespace std;

class Student{
    public:
    int age;
   char name;

};

int main(){
    Student s1;
    cout<<sizeof(s1)<<endl;
}