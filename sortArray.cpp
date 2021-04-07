#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int t)
{
    if(v[v.size()-1]<=t || v.size()==0)
    {
        v.push_back(t);
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    insert(v,t);
    v.push_back(temp);
    return;
}
void sort(vector<int> &v)
{
    if(v.size()<=1)
    {
        return;
    }
    int t=v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,t);
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }  
     sort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    } 
}