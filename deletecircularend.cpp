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
int n,i,j,data1,ele,pos;
cout<<"enter no of nodes:";
cin>>n;
for(i=0;i<n;i++){
cout<<"enter element at "<<i<<" position:";
cin>>data1;
node *temp=new node;
temp->data=data1;
temp->next=head;
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
do{

    cout<<ptr->data<<endl;

   cout<<ptr->next<<endl;
   ptr=ptr->next;

}
while(ptr!=head);


node *ptr1=new node;
node *temp;
ptr1->data=ele;
ptr1->next=head;
temp=head;
cout<<"enter position to delete";
cin>>pos;
for(i=1;i<=n;i++){
 if(i==pos-1){

    temp->next=temp->next->next;
    break;

 }
 else if(pos>n){
    cout<<"out of range"<<endl;
    break;
 }
   else
    temp=temp->next;
}









 node *ptr2;
ptr2=head;
do{
    cout<<ptr2->data<<endl;

   cout<<ptr2->next<<endl;
   ptr2=ptr2->next;

}
while(ptr2!=head);
}

