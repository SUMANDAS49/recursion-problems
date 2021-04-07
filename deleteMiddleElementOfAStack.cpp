//sort a stack using recursion
#include<bits/stdc++.h>
using namespace std;
void dmeos(stack<int>& s,int cnt)
{
    if(cnt==1)
    {
        s.pop();
        return;
    }
    int t=s.top();
    s.pop();
    dmeos(s,cnt-1);
    s.push(t);
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
    dmeos(s,(s.size()/2)+1);
    for(int i=0;i<5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}