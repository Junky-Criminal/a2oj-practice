#include<iostream>
#include<set>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int> a;
    for(int i=1;i<=d;i++){
        if(i%k==0) a.insert(i);
        if(i%l==0) a.insert(i);
        if(i%m==0) a.insert(i);
        if(i%n==0) a.insert(i);
    }
    cout<<a.size()<<endl;
    return 0;
}