#include<iostream>
using namespace std;

void triangle(int c){
    for(int i=0; i<c; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    triangle(5);
    triangle(7);
    triangle(11);
    triangle(5);
}