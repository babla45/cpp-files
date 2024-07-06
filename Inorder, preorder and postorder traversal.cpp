#include<bits/stdc++.h>
using namespace std;



class node
{
    public:
    int data;
    node *left;
    node *right;
    
    
    node(int n)
    {
        data=n;
        left=0;
        right=0;
    }
};




void push(node **head , int n)
{
    node *h=*head;
    while(1)
    {
        
        if(*head==0)
        {
            *head=new node(n);
            return;
        }
        
        
        
        
        if(n<h->data)
        {
            if(h->left==0)
            {
                h->left=new node(n);
                return;
            }
            h=h->left;
        }
        
       
       
        
        if(n>=h->data)
        {
            if(h->right==0)
            {
                h->right=new node(n);
                return;
            }
            h=h->right;
        }
        
        
        
    }
}



void inorder(node *head)
{
    if(head==0) return;
    
    inorder(head->left);
    cout<<head->data<<"->";
    inorder(head->right);
}




void preorder(node *head)
{
    if(head==0) return;
    
    cout<<head->data<<"->";
    inorder(head->left);
    inorder(head->right);
}



void postorder(node *head)
{
    if(head==0) return;
    
    inorder(head->left);
    inorder(head->right);
    cout<<head->data<<"->";
}





int main()
{
    node *head=0;
    int s[]={4,1,7,4,2,9,4,2,8};
    int n=sizeof(s)/4;
    
    
    for(int a=0; a<n; a++)
    {
        push(&head, s[a]);
    }
    
    
    
    cout<<"Inorder  : ";
    inorder(head);
    cout<<endl;
    
    
    
    cout<<"Preorder : ";
    preorder(head);
    cout<<endl;
    
    
    cout<<"Postorder: ";
    postorder(head);
    cout<<endl;
}
