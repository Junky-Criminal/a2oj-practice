#include<iostream>
#include <queue>
#include <set>
#include <unordered_set>
#include<set>
#include <list>
#include <random>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define sz(x) ((ll)(x).size())


int main()
{
    string s="";
    cin>>s;
    int o=0,t=0,h=0,p=0;
    forn(i,sz(s)){
        switch (s[i])
        {
        case '1':
            //cout<<s[i];
            o++;
            break;
        
        case '2':
            t++;
            break;
        
        case '3':
            h++;
            break;
        
        case '+':
            p++;
            break;
        }
    }
    while(o--){
        if(p==0) cout<<"1";
        else{
            cout<<"1+";
            p--;
        }
    }
    
    while(t--){
        if(p==0) cout<<"2";
        else{
            cout<<"2+";
            p--;
        }
    }

    while(h--){
        if(p==0) cout<<"3";
        else{
            cout<<"3+";
            p--;
        }
    }
    return 0;
}