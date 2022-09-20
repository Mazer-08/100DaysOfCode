//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int>st;
        int count=0;
        if(n<m){
            for(int i=0; i<n; i++){
                st.insert(a[i]);
            }
            for(int i=0; i<m; i++){
                auto it = st.find(b[i]);
                if(it!=st.end()){
                    ++count;
                    st.erase(it);
                }
            }
        }
        else{
            for(int i=0; i<m; i++){
                st.insert(b[i]);
            }
            for(int i=0; i<n; i++){
                auto it = st.find(a[i]);
                if(it!=st.end()){
                    ++count;
                    st.erase(it);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends