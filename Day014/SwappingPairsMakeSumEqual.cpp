


//NOT DONE



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        set<int>As, Bs;
        int sumA=0, sumB=0;
        for(int i=0; i<n; i++){
            As.insert(A[i]);
            sumA+=A[i];
        }
        for(int i=0; i<m; i++){
            Bs.insert(B[i]);
            sumB+=B[i];
        }
        int sub = abs(sumA-sumB);
        if(sub==0)
            return 1;
        for(auto it : As){
            int x = sub - it;
            auto srch = Bs.find(x);
            if(srch!=Bs.end()){
                return 1;
            }
        }
        return -1;
	}
 // 35 30
 // 13 13

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends