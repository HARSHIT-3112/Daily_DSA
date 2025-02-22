#include<iostream>
using namespace std;

int main(){
    int c=10;
    int* p= &c;
    cout<<*p<<endl;

    *p=5;
    cout<<*p;
}