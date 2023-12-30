#include<iostream>
#include <cmath>

using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
int main()
{
    int t;
    cin>>t;
    int lcnt =0,rcnt=0;
    forn(i,t){
        int l=0,r=0;
        cin>>l>>r;
        lcnt+=l;
        rcnt+=r;
    }
    cout<<min(abs(lcnt-t),lcnt)+min(abs(rcnt-t),rcnt)<<endl;
    return 0;
}