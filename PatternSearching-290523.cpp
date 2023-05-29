// // searching a string within a string
// bool searchPattern(string str, string pat)
// {
//     for(int i=0; i<str.length(); i++){
//         if(str.length()-i>=pat.length()){
//             string tmp = str.substr(i,pat.length());
//             if(tmp==pat)
//                 return true;
//         }
//     }
//     return false;
// }