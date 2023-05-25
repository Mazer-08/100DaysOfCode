//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int lmin[n], rmax[n];
        lmin[0] = a[0];
        rmax[n-1] = a[n-1];
        
        for(int i=1; i<n; i++){
            lmin[i] = min(lmin[i-1], a[i]);
        }
        
        for(int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1], a[i]);
        }
        
        int i=0, j=0, maxim=-1;
        while(j<n && i<n){
            if(rmax[j]>=lmin[i]){
                maxim = max(maxim, j-i);
                j++;
            }
            else
                i++;
        }
        return maxim;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends