#include<iostream>
#include<cctype>

using namespace std;

int main(){
    string s;
    cin>>s;
    if (islower(static_cast<unsigned char>(s[0]))) {
            s[0] = toupper(static_cast<unsigned char>(s[0]));
        }
    cout<<s;
}