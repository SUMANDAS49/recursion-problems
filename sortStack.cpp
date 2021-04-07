//sort a stack using recursion
#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>& s,int d)
{
    if(s.size()==0 || d>s.top())
    {
        s.push(d);
        return;
    }
    int t=s.top();
    s.pop();
    insert(s,d);
    s.push(t);
}
void sort(stack<int>& s)
{
    if(s.size()==0)
    {
        return;
    }
    int t=s.top();
    s.pop();
    sort(s);
    insert(s,t);

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
    sort(s);
    for(int i=0;i<5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}