//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y){
    int start=0, end=0, target=0, dist=-1, sum=x+y;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            target=y;
            start = i;
            break;
        }
        else if(a[i]==y){
            target=x;
            start = i;
            break;
        }
    }
    for(end=start+1; end<n; end++){
        if(a[end]==a[start]){
            start = end;
        }
        if(a[end]==target){
            if(end-start<dist || dist==-1){
                dist = end-start;
            }
            start=end;
            target = sum-target;
        }
    }
    return dist;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends