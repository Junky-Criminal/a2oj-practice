#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    cin>>i;
    char q[n];
    for(int k=0;k<n;k++){
        cin>>q[k];
    }

    while(i--){
        for(int l=0;((l<n-1));l++){
            if(q[l]=='B'&& q[l+1]=='G'){
                q[l]='G';
                q[l+1]='B';
                l++;
            }
        }
    }
    
    for(char c : q){
        cout<<c;
    }
}