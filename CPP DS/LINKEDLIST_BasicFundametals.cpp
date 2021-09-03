//WELCOME TO LINKEDLIST 101

// 0. create a node dynamically at heap memmory

#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
Node* next;
};


int main() 
{

   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   
   int x;cin>>x;

   
   Node* p;
   p=new node;
   p->data=x;
   p->next=NULL;

   cout<<p->data;

   return 0;
}




// 1. CREATE AND DISPLAY LINKEDLIST (iterative)

#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
Node* next;
}*first=NULL;

void create(int arr[],int n)
{
Node *t;
Node *temp;

first=new Node;
first->data=arr[0];
first->next=NULL;

temp=first;
for(int i=1;i<n;i++)
{
t=new Node;
t->data=arr[i];
t->next=NULL;

temp->next=t;
temp=t;
}
}

void display(Node *p) 
{
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
}

int main() 
{

   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   
   int n=5;
   int arr[n]={10,12,14,18,20};
   
   
   /* 
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   */
   
   
   create(arr,n);
   display(first);
   

   return 0;
}


// 2. CREATE AND DISPLAY LINKEDLIST (recursive)

void display(Node *p)
{
if(p!=NULL)
{
cout<<p->data<<" ";
display(p->next);
}
}




//3. Print Linkedlist in reverse order (recursive)

void display(Node *p)
{
if(p!=NULL)
{
display(p->next);  
cout<<p->data<<" ";
}
}




//4. Counting nodes and sum of all elements in a linkedlist

void COUNT_NODE_AND_TOTAL_SUM(Node *p) 
{

int count=0;
int sum=0;

while(p!=NULL)
{
count++;
sum+=p->data;
p=p->next;
}
cout<<count<<" "<<sum;
}




//5. Maximum element in a linkedlist

void MAX(Node *p) 
{

int mx=p->data;
p=p->next;

while(p!=NULL)
{
if(p->data>mx)
mx=p->data;
// we can also do this -> mx=max(p->data,mx);

p=p->next;
}
cout<<mx<<" ";
}




//6. LinearSearch in linkedlist (if x is present print yes else no)

void LinearSearch(Node *p,int x) 
{
while(p!=NULL)
{
if(p->data==x) 
{
cout<<"YES"<<endl;
return;
}

p=p->next;
}
cout<<"NO"<<endl;
}




//7. LinkedList Insertion


//(in the fornt of the linkelist)

void pushfront(int x) 
{
Node *p=new Node;
p->data=x;
p->next=first;
first=p;
}

//

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) 
{
SinglyLinkedListNode *t=new SinglyLinkedListNode(data);
t->next=llist;
llist=t;
   
return t;
}








//(end of the linkedlist)(when there's the linkedlist is already exists) o(n) Method

void pushback(int x)
{
Node *t=new Node;
t->data=x;
t->next=NULL;

Node *p;
p=first;

while(p->next!=NULL)
{
p=p->next;
}

p->next=t;
}



//O(1) method










//when we have to create linkedlist from the starting using insert at tail
Node* insertNodeAtTail(Node* head, int data) 
{
SinglyLinkedListNode* node = new Node;
node->data = data;
node->next = NULL;


if(head == NULL)   //in the case of the first insertion the linkedlist is empty
{
    head = node;
}

else              //when atleast one element is already inserted
{
    Node* temp;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

return head;
}












//(after a given node)

void push(int x,int pos)
{

Node *p=first;

for(int i=0;i<pos-1;i++)
{
p=p->next;
}

Node *t=new Node;
t->data=x;
t->next=p->next;
p->next=t;

}


//(when there is a constraint like the head node can maybe NULL) ->HACKERRANK

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position)
{
SinglyLinkedListNode* node=new SinglyLinkedListNode(data);
SinglyLinkedListNode* t=llist;

if(llist!=NULL)
{
for(int i=1;i<position;i++)
{
t=t->next;
}
node->next=t->next;
t->next=node;
}

else if(llist==NULL)
{
t->data=data;
t->next=NULL;
}

return llist;
}







//8. FULL Insertion code


#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
Node* next;
}*first=NULL;

void create(int arr[],int n)
{
Node *t;Node *temp;

first=new Node;
first->data=arr[0];
first->next=NULL;

temp=first;
for(int i=1;i<n;i++)
{
t=new Node;
t->data=arr[i];
t->next=NULL;

temp->next=t;
temp=t;
}
}

void display(Node *p) 
{
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
cout<<endl;
}


//(in the fornt of the linkelist)

void pushfront(int x) 
{
Node *p=new Node;
p->data=x;
p->next=first;
first=p;
}



//(end of the linkedlist) 

void pushback(int x)
{
Node *t=new Node;
t->data=x;
t->next=NULL;

Node *p;
p=first;

while(p->next!=NULL)
{
p=p->next;
}

p->next=t;
}



//(after a given node)

void push(int x,int pos)
{

Node *p=first;

for(int i=0;i<pos-1;i++)
{
p=p->next;
}

Node *t=new Node;
t->data=x;
t->next=p->next;
p->next=t;

}




int main() 
{

   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }

   int x;cin>>x;
   int pos;cin>>pos; //position for insert a node after a given node
   
   
   create(arr,n);
   display(first);

   pushfront(x);
   pushback(x);
   push(x,pos);

   display(first);

   //input:  12       2 8 80 12 13 18 23 4 56 70 15 56       100 6
   

   
   return 0;
}




//9. Insert in a sorted linkedlist





//10.LinkedList Deletion




//11. Check if a  LinkedList is sorted or not

void issorted(Node *a)
{
Node *p=a->next;//Node *p=first->next;
Node *q=a;//Node *q=first;

while(p!=NULL)
{
if((p->data)<(q->data))
{
cout<<"Not sorted"<<endl;
return;   
}

p=p->next;
q=q->next;
}
cout<<"Sorted"<<endl;
}










//12. Remove Duplicates form sorted list

void RemoveDuplicate_fromSortedLL(Node *p)
{
Node *q=p->next;
while(q!=NULL)
{
if(p->data!=q->data)
{
p=q;
q=q->next;
}
else
{
p->next=q->next;
delete q;
q=p->next;
}
}
}






//13. CONCATENATING AND MERGING OF TWO LINKEDLIST FULL CODE


#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
Node* next;
}*first=NULL,*second=NULL,*third=NULL;



void create(int arr[],int n)
{
Node *t;
Node *temp;

first=new Node;
first->data=arr[0];
first->next=NULL;

temp=first;
for(int i=1;i<n;i++)
{
t=new Node;
t->data=arr[i];
t->next=NULL;

temp->next=t;
temp=t;
}
}



void create2(int arr2[],int m)
{
Node *t;
Node *temp;

second=new Node;
second->data=arr2[0];
second->next=NULL;

temp=second;
for(int i=1;i<m;i++)
{
t=new Node;
t->data=arr2[i];
t->next=NULL;

temp->next=t;
temp=t;
}
}



void display(Node *p) 
{
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
cout<<endl;
}




Node* concat(Node *p,Node *q)
{
third=p;
while(p->next!=NULL)
{
p=p->next;
}
p->next=q;
return third;
}



Node* Merge(Node *p,Node *q)
{
if(p==NULL && q==NULL) return third;
else if(p==NULL && q!=NULL)  return q;
else if(p!=NULL && q==NULL)  return p;  
else
{ 
Node *last;
if(p->data<q->data)
{
third=last=p;
p=p->next;
last->next=NULL;
}
else
{
third=last=q;
q=q->next;
last->next=NULL;
}

while(p!=NULL && q!=NULL)
{
if(p->data<q->data)
{
last->next=p;
last=last->next;
p=p->next;
last->next=NULL;
}
else
{
last->next=q;
last=last->next;
q=q->next;
last->next=NULL;
}
}
if(p!=NULL){last->next=p;last=last->next;}
if(q!=NULL){last->next=q;last=last->next;}
}
return third;
}




int main() 
{

   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   

   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }

   int m;cin>>m;
   int arr2[m];
   for(int i=0;i<m;i++)
   {
   cin>>arr2[i];
   }

   
   create(arr,n);
   create2(arr2,m);
  
   display(first);
   display(second);

   
   display(Merge(first,second));
   //display(concat(first,second));
   
   return 0;
}






//14. 