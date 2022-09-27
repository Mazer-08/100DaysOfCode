//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int> umap;
	    for(int i=0; i<n; i++){
	        umap[arr[i]]++;
	    }
	   // cout<<endl;
	    for(auto it : umap){
	        if(x%2==0 && x==it.first*2 && it.second>1){
	           // cout<<it.first<<endl;
	            return true;
	        }
	        else if(umap.count(x-it.first)>0 && x-it.first!=it.first){
	            return true;
	        }
	    }
	    return false;  
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Endss