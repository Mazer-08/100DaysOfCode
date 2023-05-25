// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size(), carry=1;
//         for(int i=n-1; i>=0; i--){
//             int x = digits[i]+carry;
//             if(x>=10){
//                 digits[i] = x%10;
//                 carry = 1;
//                 if(i==0){
//                     digits.insert(digits.begin(), carry);
//                 }
//             }
//             else{
//                 digits[i] = x;
//                 carry = 0;
//             }
//         }
//         return digits;
//     }
// };