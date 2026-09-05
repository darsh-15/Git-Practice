#include<iostream>
using namespace std;
//for deleteing head
class node{
  public : 
  int data;
  node* next;
  node(int v){
    data = v;
    next =NULL;
  }};

void show(node* head){
  node*  temp=head;
  while(temp!=NULL){
    cout<< temp ->data<<" ";
    temp =temp->next;
  }
  cout<<endl;
}
void deleteh(node*& head){
  if (head== NULL){
    cout<<"list id empty!!!";
    return;
  }
  node* temp =head;
  head=head->next;
  delete temp;
}

// for deleting tail
void tail(node* &head){

if(head==NULL) {
  cout<<"List is empty";
  return ;
}
if(head->next ==NULL){
  delete head;
  head=NULL;
  return;
}
node* temp=head;
while(temp->next->next!=NULL){
  temp=temp->next;
}
delete temp->next;
temp->next=NULL;
}

//for deleting element from a speacific index
node* removek(node* head ,int k){
  if (head==NULL){
    cout<<"list is empty";
    return head;
  }
  if (k==1) {
    node*temp= head;
    head=head->next;
    delete temp;
    return head ;
  }
  int count=0;
  node *temp=head;
  node* prev=NULL;
   while (temp!=NULL){
    count++;
    if (count==k){
    prev->next=prev->next->next;
    delete temp;
    break;
   }
   prev =temp;
   temp = temp->next;
  }
  return head;
}
int main (){
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
  cout<<"original linked list: " ;
  show(head);
  
  deleteh(head);
  cout<<"after deleting head:";
  show(head);
  
  tail(head);
  cout<<"after deleting tail:";
  show(head);
  return 0;
}