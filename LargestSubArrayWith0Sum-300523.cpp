//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        multimap<int,int>m;
        m.insert({0,-1});
        int currsum=0, currcnt=0, maxcnt=0;
        for(int i=0; i<n; i++){
            currsum+=A[i];
            if(m.find(currsum)!=m.end()){
                auto it = m.find(currsum);
                currcnt = i-(it->second);
                if(currcnt>maxcnt)
                    maxcnt = currcnt;
            }
            else{
                m.insert({currsum,i});
            }
        }
        return maxcnt;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends