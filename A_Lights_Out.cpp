#include<iostream>
#include <set>
using namespace std;

int main(){
    int arr[3][3];
    int g[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(arr[i][j]%2==1){
                g[i][j]=g[i][j]^1;
                if(i>0) g[i-1][j] = g[i-1][j]^1;
                if(j>0) g[i][j-1] = g[i][j-1]^1;
                if(i<2) g[i+1][j] = g[i+1][j]^1;
                if(j<2) g[i][j+1] = g[i][j+1]^1;         
            }
        }
    }
    
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<g[x][y];
        }
        cout<<endl;
    }


}