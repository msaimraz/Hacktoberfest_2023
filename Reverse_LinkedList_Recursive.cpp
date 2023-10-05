#include<bits/stdc++.h>
using namespace std;
//BELOW IS THE RECURSIVE METHOD TO REVERSE A LINKED LIST

//node structure
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
//function to print the list
void printlist(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//recursive solution to reverse the linked list
void reverse(node *head, node* curr,node*prev){
      //base case: when curr is null previous points to that node which has to be our head in reversed list 
        if(curr==NULL) {
            head=prev;
            return;
        }
        node *forward=curr->next;
        reverse(head,forward,curr);
        curr->next=prev;
}
node *reverselist(node * &head){
    node *curr=head;
    node *prev=NULL;
    reverse(head,curr,prev);
    return head;
}

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
