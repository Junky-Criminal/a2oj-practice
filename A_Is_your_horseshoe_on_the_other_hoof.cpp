#include<iostream>
#include <set>
#include <cmath>
#include <string>

using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define sz(x) ((ll)(x).size())

int main()
{
    set<long long int> a;
    forn(i,4){
        long long int c=0;
        cin>>c;
        a.insert(c);
    }
    cout<<4-sz(a)<<endl;
    return 0;
}