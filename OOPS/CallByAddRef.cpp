#include<iostream>
using namespace std;


//by address
void inc(int *x){
    (*x)++;
}

// int main(){
//     int a=5;
//     inc(&a);
//     cout<<a<<endl;
// }

void inc2(int &x){
    x++;
}
int main(){
    int a=9;
    inc2(a);
    cout<<a<<endl;
}