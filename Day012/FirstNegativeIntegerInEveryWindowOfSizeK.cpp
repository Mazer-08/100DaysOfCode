//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    vector<long long>ans;
    long long int count=0, x=K;
    long long int index=count, answ=0;
    while(count<=N-K){
        if(A[index]<0 && x>0){
            ans.push_back(A[index]);
            x=K;
            ++count;
            index = count;
        }
        else{
            --x;
            ++index;
        }
        if(x==0){
            ans.push_back(0);
            x=K;
            ++count;
            index = count;
        }
    }
    // for(long long int i=0; i<=N-K; i++){
    //     long long int x=K, index=i, answ=0;
    //     int flag=0;
    //     while(x--){
    //         if(A[index]<0){
    //             answ=A[index];
    //             flag=1;
    //             break;
    //         }
    //         index++;
    //     }
    //     if(flag==1)
    //         ans.push_back(answ);
    //     else
    //         ans.push_back(0);
    // }
    return ans;
 }