#include <iostream>

using namespace std;



class Solution {
public:
    // int strStr(string haystack, string needle) {
    //     int hIndex = 0;
    //     int nIndex = 0;
    //     int a = 0;
    //     while(hIndex < haystack.length()) {
    //         cout << "TOP OF LOOP: " << haystack[hIndex] << " " << needle[nIndex] << endl;
            
    //         if(haystack[hIndex] == needle[nIndex]){
    //             cout << "TRUE:  " << haystack[hIndex] << " " << needle[nIndex] << endl;
    //             hIndex++;
    //             nIndex++;
    //             if(nIndex == needle.length()){
    //                 return hIndex - needle.length();
    //             }
    //             a++;
    //         } else {
    //             cout <<  "FALSE: " << hIndex << " " << nIndex << endl;
    //             if(a == hIndex-nIndex){
    //                 cout << "a=: " << a << endl;
    //                 hIndex++; 
    //                 nIndex = 0;
    //             } else { 
    //                 cout << "a: " << a << endl;
    //                 hIndex -= nIndex;
    //             }
                    
    //         }  
    //     }
    //     return -1;
    // }
    int strStr(string haystack, string needle){
        int needleLength = needle.length();
        int start = 0;
        if(needle.length() > haystack.length())
            return -1;
        while(start <= haystack.length()-needleLength){
            cout << "START: " << start << " h[start]: " << haystack[start] << " h[s to end]: " << haystack.substr(start, needleLength) << endl;
            if(haystack.substr(start, needleLength) == needle)
                return start;
            start++;
        }
        return -1;
    }
};

int main() {
    
    Solution s;
    cout << s.strStr("aa", "aaa") << endl;
    
}