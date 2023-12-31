#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int amazing = 0;
    int max=0;
    cin>>max;
    int min =max;
    while(t-1){
        int pts;
        cin>>pts;
        if(pts>max){
            amazing++;
            max = pts;
        }
        else if(pts<min){
            amazing++;
            min = pts;
        }
        t--;
    }
    cout<<amazing<<endl;
}