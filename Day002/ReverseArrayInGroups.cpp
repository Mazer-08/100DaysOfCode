//NOT DONE

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long>& arr, int start, int stop){
        while(start!=stop){
            swap(arr[start], arr[stop]);
            ++start;
            --stop;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int count = 0;
        int start = count*k, stop = start+k-1;
        if(stop>n-1)
            stop=n-1;
        reverse(arr,start,stop);
        count++;
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends