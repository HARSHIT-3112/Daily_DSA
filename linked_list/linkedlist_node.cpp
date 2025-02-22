#include<iostream>
using namespace std;

class node {
public:
    int data;
    node * next;
};

int main(){
    node a;
    a.data=10;

    node b;
    b.data = 20;

    node c;
    c.data = 30;

    a.next=&b;
    b.next=&c;
    c.next=NULL;
    cout<<a.next;
}
