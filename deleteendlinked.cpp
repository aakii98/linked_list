#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
int main(){
node *head,*tail;
head=NULL;
tail=NULL;
int n,data1,i;
cout<<"enter no of nodes";
cin>>n;
for(i=0;i<n;i++){
cout<<"enter the data to store at"<<i<<"node";
cin>>data1;
node *temp=new node;
temp->data=data1;
temp->next=NULL;
if(head==NULL){
    head=temp;
    tail=temp;
}
else{
    tail->next=temp;
    tail=tail->next;
}
}
node *ptr;
ptr=head;
while(ptr!=NULL){
    cout<<ptr->data;
    ptr=ptr->next;
}
node *new_node=new node;
int val;
node *ptr1;
ptr1=head;
node *prev;

while(ptr1->next!=NULL){
    prev=ptr1;
     ptr1=ptr1->next;
     }

     prev->next=NULL;
     delete ptr1;




cout<<endl<<"after deleting";
  node *ptr2;
  ptr2=head;
      while(ptr2!=NULL){

    cout<<ptr2->data;
    ptr2=ptr2->next;
}


}
