// Problem Link : https://codeforces.com/problemset/problem/723/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m;
    cin>>a>>b>>c;
    int p1=min(a,min(b,c)),p2=max(a,max(b,c));
    if(a!=p1 && a!=p2) m=a;
    else if(b!=p1 && b!=p2) m=b;
    else m=c;
    cout<<(abs(m-p1)+abs(m-p2))<<endl;
}
