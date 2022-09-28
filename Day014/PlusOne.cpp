

//NOT DONE



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int flag=0;
        if(arr[N-1]!=9){
            arr[N-1]+=1;
        }
        else{
            if(arr[0]==9){
                arr.push_back(0);
                arr[0]=1;
                for(int i=N-1; i>0; i--){
                    if(arr[i]==9){
                        arr[i]=0;
                        flag=1;
                    }
                    else if(flag==1){
                        arr[i] += 1;
                        break;
                    }
                } 
            }
            else{
                for(int i=N-1; i>=0; i--){
                    if(arr[i]==9){
                        arr[i]=0;
                        flag=1;
                    }
                    else if(flag==1){
                        arr[i] += 1;
                        break;
                    }
                } 
            }
            
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends