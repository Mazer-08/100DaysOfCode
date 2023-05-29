//O(1) 
int josephus(int n, int k)
    {
       int i=1, start=0;
        
        while(i<=n){
            start = (start+k)%i;
            i++;
        }
        
        return start+1;
    }

// //O(n2)
//     void execution(vector<int>& ans, int start, int k){
//         if(ans.size()==1){
//             return;
//         }
//         start = (start+k)%ans.size();
//         ans.erase(ans.begin()+start);
//         execution(ans, start, k);
//     }
//     int safePos(int n, int k) {
//         vector<int>ans;
//         for(int i=0; i<n; i++){
//             ans.push_back(i+1);
//         }
//         int start = 0;
//         execution(ans, start, k-1);
        
//         return ans[0];
//     }