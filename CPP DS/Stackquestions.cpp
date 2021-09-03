//1.
//Nearest Greater Element to the right

#include<bits/stdc++.h>
using namespace std;
 


vector<int> solve(int arr[],int n)
{
vector<int> v;
stack<int> st;
 
for(int i=n-1;i>=0;i--)
{
 
if(st.empty()) 
v.push_back(-1);
 
else if(!st.empty() && st.top()>arr[i])
v.push_back(st.top());
 
else
{
while(!st.empty() && st.top()<=arr[i])
{
st.pop();
}
if(st.empty())
{
v.push_back(-1);
}
else
{
v.push_back(st.top());
}
}
st.push(arr[i]);
}
reverse(v.begin(),v.end());
return v;
}
 
 
 
int main() 
{
 
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
 
   int n=5;
   int arr[n]={4,5,2,10,8};
   int testcase;
   cin>>testcase;
   while(testcase--)
   {
   vector<int> ans=solve(arr,n);
   for(auto a:ans)
   {
   cout<<a<<" ";
   }
   cout<<endl;
   }
 
   return 0;
}






//2.
//Nearest greater element to left
//(for this we just have to start for loop from beginning and no need of reverse the vector in last)

vector<int> solve(int arr[],int n)
{
vector<int> v;
stack<int> st;
 
for(int i=0;i<n;i++)
{
 
if(st.empty()) 
v.push_back(-1);
 
else if(!st.empty() && st.top()>arr[i])
v.push_back(st.top());
 
else
{
while(!st.empty() && st.top()<=arr[i])
{
st.pop();
}
if(st.empty())
{
v.push_back(-1);
}
else
{
v.push_back(st.top());
}
}
st.push(arr[i]);
}
return v;
}



//3.
//Nearest Smaller to left

vector<int> solve(int arr[],int n)
{
vector<int> v;
stack<int> st;
 
for(int i=0;i<n;i++)
{
 
if(st.empty()) 
v.push_back(-1);
 
else if(!st.empty() && st.top()<arr[i])
v.push_back(st.top());
 
else
{
while(!st.empty() && st.top()>=arr[i])
{
st.pop();
}
if(st.empty())
{
v.push_back(-1);
}
else
{
v.push_back(st.top());
}
}
st.push(arr[i]);
}
return v;
}



//4.
//Nearest Smaller to right

vector<int> solve(int arr[],int n)
{
vector<int> v;
stack<int> st;
 
for(int i=n-1;i>=0;i--)
{
 
if(st.empty()) 
v.push_back(-1);
 
else if(!st.empty() && st.top()<arr[i])
v.push_back(st.top());
 
else
{
while(!st.empty() && st.top()>=arr[i])
{
st.pop();
}
if(st.empty())
{
v.push_back(-1);
}
else
{
v.push_back(st.top());
}
}
st.push(arr[i]);
}
reverse(v.begin(),v.end());
return v;
}




//5.
//Valid Parenthesis one solution

    unordered_map<char,int> m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    bool isValid(string s) 
    {
    stack<char> st;
    int n=s.size();
    
    for(int i=0;i<n;i++)
    {
    
    if(m[s[i]]<0)
    {
    st.push(s[i]);
    }
    
    else
    {
    if(st.empty()) return false;
    
    char top=st.top();
    st.pop();
    if(m[top]+m[s[i]]!=0)
    return false;
        
    }
    }
        
    if(st.empty()) return true;
     
    return false;
    }



//5.
//Valid Parenthesis another solution for O(1) space

//6.
//stock span
vector <int> calculateSpan(int price[], int n)
{
vector<int> ans(n);
stack<int> s;
      
for(int i = 0; i < n; i++)
{
while(!s.empty() && price[s.top()] <= price[i])
s.pop();
                
ans[i] = s.empty() ? (i + 1) : (i - s.top());
                
s.push(i);
}
       
return ans;
}


//7.
//Maximum Area Histogram
long long getMaxArea(long long arr[], int n)
{
stack<int> s;
vector<long long> left(n),right(n);

for(int i=0;i<n;i++)
{
while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();

left[i]=s.empty()? -1:s.top();
s.push(i);
}

while(!s.empty()) s.pop();

for(int i=n-1;i>=0;i--)
{
while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();

right[i]=s.empty()? n:s.top();
s.push(i);
}

long long ans = 0;
for(int i = 0; i < n ; i ++)
{
ans = max(ans,(abs(right[i]-left[i])-1)*arr[i]);
}

return ans; 
}   