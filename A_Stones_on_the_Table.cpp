#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<t-1;i++){
        if(s[i]==s[i+1]) ans++;
    }
    cout<<ans;
}