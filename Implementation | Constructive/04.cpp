// Problem Link : https://codeforces.com/contest/151/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<(min((k*l)/nl,min(p/np,c*d)))/n<<endl;
}
