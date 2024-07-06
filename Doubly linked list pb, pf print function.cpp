//doubly linked list pb , pf and print function 
#include <iostream>



using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
    
    node(int n)
    {
        data=n;
        next=0;
        prev=0;
    }
};


void pb(node **head, int n)
{
    node *h=*head;
    node *temp=new node(n);
    
    if(!h)
    {
        *head=temp;
        return;
    }
    
    while(h->next) h=h->next;
    
    h->next=temp;
    temp->prev=h;
}


void pf(node **head, int n)
{
    node *temp=new node(n);
    
    if(!*head)
    {
        *head=temp;
        return;
    }
    
    
    (*head)->prev=temp;
    temp->next=(*head);
    
    *head=temp;
}

void print(node **head)
{
    node *h=*head;
    while(h)
    {
        
        cout<<h->data<<"->";
        h=h->next;
    }
}



int main()
{

    node *head=NULL;
    
    for(int a=1; a<=5; a++)
    {
        pb(&head,a);
        pf(&head,a);
    }
    
    print(&head);

    return 0;
}
