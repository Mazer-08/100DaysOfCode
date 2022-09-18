//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int ans=-1;
        unordered_set<int>s;
        unordered_map<int,int>m;
        for(int i=0; i<n; i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                m[arr[i]] = i;
            }
            else{
                auto it = m.find(arr[i]);
                if(ans==-1 || (it->second+1)<ans){
                    ans = (it->second+1);
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

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends