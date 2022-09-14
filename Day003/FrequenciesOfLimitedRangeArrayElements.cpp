


//NOT DONE TODAY



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P){
        vector<int>v(N,0);
        sort(arr.begin(), arr.end());
        int count=0, key=1, fill=0;
        for(int i=0; i<N; i++){
            if(arr[i]==key && i==N-1){
                count++;
                v[fill++]=count;
            }
            if(arr[i]==key)
                count++;
            else{
                v[fill++]=count;
                count=0;
                ++key;
                --i;
            }
        }
        arr.assign(v.begin(),v.end());
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends