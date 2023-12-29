#include<iostream>

using namespace std;
bool isprime(int x)
{
    int i;
    if(x==2) return true;
    for(i=2;i<x;i++)
        if(x%i==0) return false;
    return true;
}
 
int main()
{
    int i, n, m;
    cin>>n>>m;
    for(i=n+1;i<=m;i++)
    {
        if(isprime(i))
        {
            if(i==m) cout<<"YES";
            else cout<<"NO";
            break;
        }
    }
    if(i>m) cout<<"NO";
    return 0;
}