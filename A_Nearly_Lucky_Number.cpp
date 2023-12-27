#include<iostream>
using namespace std;

int main(){
    long long int c;
    cin>>c;
    int no=0;
    while(c!=0){
        if(c%10==4 || c%10==7){
            no++;
        }
        c=c/10;
    }
    if(no==4 || no ==7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}