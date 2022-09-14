


//NOT DONE TODAY


//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n){
    // sort(arr, arr+n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int ans=0;
    // if(arr[0]>=0)
    //     return 0;
    for(int i=0; i<n; i++){
        int sum=0;
        sum += arr[i];
        int first=i+1;
        for(int j=first+1; j<n; j++){
            int temp = arr[first] + arr[j];
            // cout<<endl;
            // cout<<arr[i]<<" + "<<arr[first]<<" + "<<arr[j]<<" = "<<sum+temp<<endl;
            if(sum+temp==0){
                ans=1;
                break;
            }
            else if(j==n-1){
                // cout<<"reset"<<endl;
                ++first;
                j = first;
            }
        }
        if(ans==1){
            break;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends