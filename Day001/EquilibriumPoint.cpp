//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        int s=0, e=n-1;
        long long ssum=0, esum=0, x=-1;
        if(n==1){
            x=1;
            goto deo;
        }
        ssum+=a[s++]; 
        esum+=a[e--];
        while(s<=e){
            if(ssum==esum && s==e){
                x=s+1;
                break;
            }
            if(ssum>esum){
                esum+=a[e--];
            }
            else if(esum>ssum){
                ssum+=a[s++];    
            }
            else{
                esum+=a[e--];
                ssum+=a[s++];
            }
        }
        deo:
        return x;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends