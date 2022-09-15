

//NOT SOLVED


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y){
    int s = -1, e, ans = -1, tar1 = x, tar2 = y, flag = 0, eflag = 0;
    for (int i = 0; i < n; i++){
        if (flag == 0){
            if (a[i] == tar1 || a[i] == tar2){
                if (a[i] == x){
                    // cout<<x<<" found"<<endl;
                    tar1 = y;
                    tar2 = y;
                }
                else{
                    // cout<<y<<" found"<<endl;
                    tar1 = x;
                    tar2 = x;
                }
                s = i;
                // cout<<"s = "<<i<<endl;
                flag = 1;
            }
        }
        else{
            if (a[i] == tar1 || a[i] == tar2){
                if (a[i] == x){
                    // cout<<x<<" found"<<endl;
                    tar1 = y;
                    tar2 = y;
                }
                else{
                    // cout<<y<<" found"<<endl;
                    tar1 = x;
                    tar2 = x;
                }
                e = i;
                // cout<<"e = "<<i<<endl;
                if (e-s<ans || ans==-1)
                    ans=e-s;
                s=i;
                // cout<<ans<<endl;
            }
        }
    }
    return ans;
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