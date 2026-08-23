class Solution {
public:
    int strStr(string haystack, string needle) {
    
        for(int i = 0; i < haystack.size(); i++){
    int j = 0;
    while(j < needle.size()){
        if(i+j >= haystack.size()) return -1;  // bounds check
        if(haystack[i+j] == needle[j]) j++;
        else break;
    }
    if(j == needle.size()) return i;
}
return -1;
}
};