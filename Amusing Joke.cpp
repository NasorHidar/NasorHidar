#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    a=a+b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
