//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    if(m>n)
        return "No";
        
    multiset<int>ms;
    int flag=0;
    for(int i=0; i<n; i++){
        ms.insert(a1[i]);
    }
    for(int i=0; i<m; i++){
        if(ms.find(a2[i]) == ms.end()){
            flag=1;
            break;
        }
        else{
            auto it = ms.find(a2[i]);
            ms.erase(it);
        }    
    }
    if(flag){
        return "No";
    }
    else{
        return "Yes";
    }
}