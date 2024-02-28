// Problem Link : https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans,x,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>x;
            if(x==1) ans=abs(3-i)+abs(3-j);
        }
    } 
    cout<<ans<<endl;
}
