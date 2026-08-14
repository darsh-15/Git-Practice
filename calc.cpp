#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"enter op [+,-,*,/] :"<<endl;
    cin >>op;

    cout <<"enter ist no: ";
    cin>>a;

    cout <<"\nenter 2nd no: ";
    cin>>b;
    
    if (op=='+'){
        cout<<a<<"+"<<b<<"="<<a+b;
    }
     else if (op=='-'){
        cout<<a<<"-"<<b<<"="<<a-b;
     }
     else if (op=='*'){
        cout<<a<<"*"<<b<<"="<<a*b;
     }
     else if(op=='/' && b>0){
        cout<<a<<"/"<<b<<"="<<a/b;
     }
    else if(b==0){
        cout<<"not possible";
     }
     else{
        cout<<"operator is not valid!!!";
     }
    return 0;

}

