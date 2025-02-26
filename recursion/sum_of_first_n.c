#include<stdio.h>
//#include<conio.h>

int sum(int n){
    if(n<10){
        return n;
    }
    else{
        return (n%10 + sum(n/10));
    }
}

int main(){
    int n,s;
    printf("enter the number :");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of digits are : %d",s);
    //int getch();
    return 0;
}
