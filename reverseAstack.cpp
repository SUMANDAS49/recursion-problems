//sort a stack using recursion
#include<bits/stdc++.h>
using namespace std;
void ins(stack<int>& s,int d)
{
    if(s.size()==0)
    {
        s.push(d);
        return;
    }
    int k=s.top();
    s.pop();
    ins(s,d);
    s.push(k);
    return;
}
void rev(stack<int>& s)
{
    if(s.size()==1)
    {
        return;
    }
    int t=s.top();
    s.pop();
    rev(s);
    ins(s,t);
    return;
}
int main()
{
    stack<int> s;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        s.push(d);
    }
    rev(s);
    for(int i=0;i<5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}