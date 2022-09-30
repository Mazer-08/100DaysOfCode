#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int ro, col;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int temp; cin>>temp;
            if(temp==1){
                ro=i;
                col=j;
            }
            arr[i][j]=temp;
        }
    }
    int ans = abs(2-ro)+abs(2-col);
    cout<<ans;
}