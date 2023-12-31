#include<iostream>
#include <cmath>
#include <string>


using namespace std;


int main()
{
    int t;
    cin>>t;
    int capacity=0;
    int max=0;
    while(t--){
        int a=0,b=0;
        cin>>a>>b;
        capacity = abs(capacity) - a + b;
        if(capacity>max) {
            max = capacity;
        }   
    }
    cout<<max<<endl;
    return 0;
}