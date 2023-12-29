#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        sum+=y;
    }
    cout<<(long double)sum/(long double)n<<endl;
    return 0;
}