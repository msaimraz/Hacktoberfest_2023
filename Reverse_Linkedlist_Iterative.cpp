#include<bits/stdc++.h>
using namespace std;

//BELOW IS THE ITERATIVE APPROACH TO REVERSE GIVEB LINKED LIST

// node structure
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//function to insert node at the end of linked list
void insertatend(int d,node* &tail){
    node * newnode= new node(d);
    tail->next=newnode;
    tail=tail->next;
}

//function to print the linked list
void printlist(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//iterative approach to reverse given linked list- once the traversal and reversal is completed the head of the new reversed linked list will be stored into 'prev' variable so we return that
node* reverselist(node* &head){
    //if list is empty or has only one element
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

//main function 
int main(){
     node* node1=new node(3);
     node * head=node1;
     node * tail=node1;

     insertatend(5,tail);
     insertatend(7,tail);
     insertatend(9,tail);
     printlist(head);

     reverselist(head);
     printlist(head);
     
}

