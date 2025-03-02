#include <iostream>
#include <string>
using namespace std;
string toLowerCase(string s);

string toLowerCase(string s) {
    if(s.length()>=1 && s.length()<=100){
     for(int i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
}
cout<<s;
return s;
}
return s;
}

int main(){
    string s;
    cin>>s;
    toLowerCase(s);
    return 0;
}


