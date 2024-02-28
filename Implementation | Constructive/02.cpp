// Problem Link : https://codeforces.com/contest/514/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(auto& x : s){
        if(x>'4') x='9'-(x-'0');
    }
    if(s[0]=='0') s[0]='9';
    cout<<s<<endl;
}
