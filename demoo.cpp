#include<iostream>
using namespace std ;

class book{
private:
int x;
int y;

public:
book(int xx,int yy){
    x=xx;
    y=yy;
}
book(const book &sec){
    x=sec.x;
    y=sec.y;
    
}
}
void dis(){
    cout<<"Book Tittle: "<<t;
    cout<<"\n name of author: "<<n;
    cout<<"\n ISBN code: "<<ib;
}
};
int main() {
    book b1("Ikagai","helin kellar","ERNF");
    b1.dis();
 
return 0;
}