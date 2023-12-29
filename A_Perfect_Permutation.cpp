#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n%2==1){
        cout<<"-1"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<i+2<<" ";
            }
            else{
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}