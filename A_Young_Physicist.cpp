#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[3] ={0};
    int a,b,c = 0;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[0] += a;
        arr[1] += b;
        arr[2] += c;
    }
    if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}