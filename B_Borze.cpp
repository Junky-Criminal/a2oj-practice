#include<iostream>
#include<vector>

using namespace std;

int main(){
    string t;
    vector<int> a;
    cin>>t;
    for(int i=0;i<t.size();i++){
        if(t[i]=='.') a.push_back(0);
        else if(t[i]=='-'){
            if(t[i+1]=='.') a.push_back(1);
            else a.push_back(2);
            i++;
        }
    }
    for(int j : a){
        cout<<j;
    }
    cout<<endl;
    return 0;
}