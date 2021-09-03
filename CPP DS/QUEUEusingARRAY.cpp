#include<bits/stdc++.h>
using namespace std;


struct Queue
{
int size;
int front;
int rear;
int *q;
};


void create(Queue *qu,int size)
{
qu->size=size;
qu->q=new int[qu->size];
qu->front=qu->rear=-1;
}


int isEmpty(Queue qu)
{
return (qu.front==qu.rear)? 1:0;
}


int isFull(Queue qu)
{
return (qu.rear==qu.size-1)? 1:0;
}


void enqueue(Queue *qu,int x)
{
if(qu->rear==qu->size-1) cout<<"queue overflow";
else
{
qu->rear++;
qu->q[qu->rear]=x;
}
}


int dequeue(Queue *qu)
{
int x=-1;
if(qu->front==qu->rear) cout<<"queue underflow";
else
{
qu->front++;
x=qu->q[qu->front];
}
return x;
}


void display(Queue qu)
{
for(int i=qu.front+1;i<=qu.rear;i++)
{
cout<<qu.q[i]<<" ";
}
cout<<endl;
}


int main()
{
int n;cin>>n;
Queue qu;
create(&qu,n);
enqueue(&qu,10);
enqueue(&qu,15);
enqueue(&qu,20);
display(qu);
cout<<dequeue(&qu);


 return 0;
}


