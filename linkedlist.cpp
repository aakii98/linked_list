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
node *node1=new node;
cout<<"insert an element";
cin>>data1;
node1->data=data1;
node1->next=head;
head=node1;
node *ptr1;
ptr1=head;
while(ptr1!=NULL){
    cout<<ptr1->data;
    ptr1=ptr1->next;
}


return 0;




}

