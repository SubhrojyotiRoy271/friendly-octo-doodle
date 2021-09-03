
/************************ STACK USING ARRAY *******************************/




#include<bits/stdc++.h>
using namespace std;


struct Stack  //don't use small s in Stack because STL stack has already ocupied that
{
int size;
int top;
int *s;
};

void create(Stack *st)
{
cin>>st->size;
st->top=-1;
st->s=new int[st->size];

}

void display(Stack st)
{
int i;
for(i=st.top;i>=0;i--)
cout<<st.s[i]<<" ";
}

void push(Stack *st,int x)
{
if(st->top==st->size-1) return; //stack overflow
else
{
st->top++;
st->s[st->top]=x;
}
}

int pop(Stack *st)
{
int x=-1;
if(st->top==-1) return x; //stack underflow
else
{
x=st->s[st->top--]; 
}
return x;
}




int main() 
{

   Stack st;
   create(&st);

   push(&st,5);
   push(&st,10);
   push(&st,15);
   display(st);
   
   return 0;
}




//other operations


struct Stack
{
 int size;
 int top;
 int *S;
};

void create(Stack *st)
{
 cin>>st->size;
 st->top=-1;
 st->S=new int[st->size];
}



void Display(Stack st)
{
 int i;
 for(i=st.top;i>=0;i--)
 cout<<st.S[i]<<" ";
 
}



void push(Stack *st,int x)
{
 if(st->top==st->size-1)
 printf("Stack overflow\n");
 else
 {
 st->top++;
 st->S[st->top]=x;
 }
 
}



int pop(Stack *st)
{
 int x=-1;
 
 if(st->top==-1)
 printf("Stack Underflow\n");
 else
 {
 x=st->S[st->top--];
 }
 return x;
}



int peek(Stack st,int index)
{
 int x=-1;
 if(st.top-index+1<0)
 printf("Invalid Index \n");
 x=st.S[st.top-index+1];
 
 return x;
}



int isEmpty(Stack st)
{
 if(st.top==-1)
 return 1;
 return 0;
}


int isFull(Stack st)
{
 return st.top==st.size-1;
}



int stackTop(Stack st)
{
 if(!isEmpty(st))
 return st.S[st.top];
 return -1;
}



int main()
{
 Stack st;
 create(&st);
 
 push(&st,10);
 push(&st,20);
 push(&st,30);
 push(&st,40);
 
 Display(st);
 
 return 0;
}
