//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>ans;
        unordered_set<int>us;
        
        for(int i=0; i<n; i++)
        {
            us.insert(arr1[i]);
        }
        
        for(int i=0; i<m; i++)
        {
            us.insert(arr2[i]);
        }
        
        for(auto it : us)
        {
            int y = it;
            ans.push_back(y);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
        
        
        
        
        // vector<int>ans;
        // int flag;
        // int size1 = min(n,m);
        // int size2 = max(n,m);
        // if(n<=m){
        //     flag = 0;
        // }
        // else{
        //     flag=1;
        // }
        // int j=0, i=0;
        // if(flag==0){
        //     while(i<n){
        //         if(arr1[i]==arr2[j]){
        //             ans.push_back(arr1[i]);
        //             ++i; ++j;
        //         }
        //         else if(arr1[i]<arr2[j]){
        //             ans.push_back(arr1[i]);
        //             ++i;
        //         }
        //         else if(arr1[i]>arr2[j]){
        //             ans.push_back(arr2[j]);
        //             ++j;
        //         }   
        //     }
        // }
        // else{
        //     while(j<m){
        //         if(arr1[i]==arr2[j]){
        //             ans.push_back(arr1[i]);
        //             ++i; ++j;
        //         }
        //         else if(arr1[i]<arr2[j]){
        //             ans.push_back(arr1[i]);
        //             ++i;
        //         }
        //         else if(arr1[i]>arr2[j]){
        //             ans.push_back(arr2[j]);
        //             ++j;
        //         }
        //     }    
        // }
        
        // if(flag==0){
        //     for(int x=j; x<m; x++){
        //         ans.push_back(arr2[x]);
        //     }
        // }
        // else{
        //     for(int x=i; x<n; x++){
        //         ans.push_back(arr2[x]);
        //     }    
        // }
        // return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends