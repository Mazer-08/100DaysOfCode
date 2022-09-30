#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0; t!=0; i++){
        if(i>=n-1){
            --t;
            i=0;
        }
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i], s[i+1]);
            ++i;
        }    
    }
    cout<<s;
}