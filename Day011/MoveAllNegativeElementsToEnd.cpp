//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>negi;
        int sort=0,count=0;
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                negi.push_back(arr[i]);
            }
            else{
                swap(arr[i],arr[sort]);
                ++sort;
                ++count;
            }
        }
        int j=0;
        for(int i=0; i<n; i++){
            if(i>count-1){
                arr[i]=negi[j];
                ++j;
            }
        }
    }
};
//1 -1 3 2 11 6 -7 -5

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends