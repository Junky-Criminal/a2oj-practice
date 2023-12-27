#include<iostream>
#include<set>
using namespace std;
bool checkDigits(int year){
    set<int> a;
    for(int i = 0;i<4;i++){
        a.insert(year%10);
        year = year/10;
    }
    if(a.size()==4) {
        return true;
    }
    else return false;
}

int main(){
    int year;
    cin>>year;
    do
    {
        year++;
    } while(!checkDigits(year));
    cout<<year;
    return 0;
}