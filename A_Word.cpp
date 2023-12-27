#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int lc=0;
    for(char c : s){
        if(islower(c))lc++;
    }

    if(lc>=(s.size()-lc)){
        for(char &c : s){
            if(isupper(c)){ 
                c = tolower(c);
            }
        }
    }
    else{
        for(char &c : s){
            if(islower(c)){ 
                c = toupper(c);
            }
        }
    }

    cout<<s;
}