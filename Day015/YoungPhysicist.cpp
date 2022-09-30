#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>x;
    vector<int>y;
    vector<int>z;
    for(int i=0; i<n; i++){
        int tempx, tempy, tempz;
        cin>>tempx>>tempy>>tempz;
        x.push_back(tempx);
        y.push_back(tempy);
        z.push_back(tempz);
    }
    int xsum=0, ysum=0, zsum=0;
    for(int i=0; i<n; i++){
        xsum+=x[i];
        ysum+=y[i];
        zsum+=z[i];
    }
    if(xsum!=0 || ysum!=0 || zsum!=0)
        cout<<"NO";
    else
        cout<<"YES";
}