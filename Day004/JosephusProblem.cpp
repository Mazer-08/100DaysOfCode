


//NOT SOLVED



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int solve(set<int> s, int n,int k ,int index){
        int ans=0;
        if(n==1){
            auto it = s.begin();
            ans = *it;
            return ans;
        }
        
        s.erase(index);
        //exclude
        if(index==n){
            index = (index+k+1)%n;
        }
        if(index+k<=n){
            index+=k;
        }
        else{
            index = (index+k)%n;
        }
        
        ans = solve(s,n-1,k,index);
        return ans;
    }
    int josephus(int n, int k)
    {
       //Your code here
       int index = 0;
       if(k==n){
            index = n;
        }
        if(k<=n){
            index+=k;
        }
        else{
            index = (index+k)%n;
        }
       set<int> s;
       for(int i=1;i<=n;i++){
           s.insert(i);
       }
       int x = solve(s,n,k,index);
       return x;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends