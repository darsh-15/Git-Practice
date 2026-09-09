#include<iostream>
using namespace std;
#include<vector>//size of data is changing dynamically

//function=fxn::pointer=ptr
class node{
    public:
    int data;
    node* next;
    node* back ;
    public:
    node(int data1, node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    node (int data1){
    data = data1;
    next=nullptr;
    back=nullptr;
}};
//converting ARRAY to DOUBLE LL
node*arrtodll(vector<int> &arr){ //return type is node, 'arr to dll' is fxn name ,
    node* head=new node(arr[0]);
    node*prev= head; //prev ptr pointing to head
    for(int i=1; i<arr.size(); i++){
     node* temp = new node(arr[i],nullptr, prev);
     prev->next=temp;// prev=temp,slides the current pointer forward
     prev=temp;
    }
return head;//trasverse list form start
}

void show(node* head){ //head as parameter ans linking starts from head
    while(head!=0){ //loop will iterate untill the head is null
        cout<<head ->data<<" ";
        head=head->next;
    }
}
//deleting ist element => for that we need to shift original head to next node/element and break original head link with next head. so thatnew head back points to null and next only links to 3rd element
node* delh(node* head){
    if(head==NULL || head->next==NULL)
    return NULL;

    node* prev=head;//prev will same as head
    head=head->next;//head points to next element
    head->back=nullptr;//breaking the link with prev by pointing it to null 
    prev->next=nullptr;//breaking link of original head by prevnext pointing to null
    return head;//new head is returned
}
//deleting the tail=>last element[tail] break prev link prev must be null and the 2nd last next points to null
node* delt(node* head){
    if(head==NULL || head->next==NULL)
    return NULL;

    node* tail=head;
    while(tail->next!=NULL){//iterate the loop untill tail next is null
      tail=tail->next;//will stop 
    } 
    node* prev=tail->back;//standing on tail the prevs tail's back [here prev is 2]
    prev->next= nullptr;//prev breaks link with last elemnt as it's next is pinting to null
    tail->back=nullptr;//and last element breaks link with rest of arrar as back point it to NULL[9 back will point to null]
    delete tail;//hence tail is deleted
    return head;
}

int main(){
    vector<int> arr={12,4,2,9};
    node*head=arrtodll(arr);
    head=delt(head);
    show(head);
return 0;
}

