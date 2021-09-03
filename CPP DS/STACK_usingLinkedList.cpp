
/*******************************  STACK USING LINKED LIST *********************************/


#include<bits/stdc++.h>
using namespace std;


struct Node
{
int data;
Node *next;
}*top=NULL;




void push(int x)
{
Node *t=new Node;
if(t==NULL) cout<<"Stack overflow";
else
{
t->data=x;
t->next=top;
top=t;
}
}




int pop()
{
int x=-1;
if(top==NULL) cout<<"Stack underflow";
else
{
Node *t=top;
top=top->next;
x=t->data;
delete t;
}
return x;
}




void display()
{
Node *p=top;
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
cout<<endl;
}





int peek(int pos)
{
Node *p=top;
for(int i=1;p!=NULL && i<pos;i++)
{
p=p->next;
}
if(p) return p->data;
else return -1;
}




int stacktop()
{
if(top) return top->data;
else return -1;
}




int main()
{
push(10);
push(20);
push(40);
 

display();
 
return 0;
}
