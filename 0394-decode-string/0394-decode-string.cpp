class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strs;
        string current = "";
        int k = 0;

        for(char c : s){
             if(isdigit(c)){
                 k = k*10 + (c-'0');  // handles multi-digit
                 } else if(c == '['){
        counts.push(k);
        strs.push(current);
        current = "";
        k = 0;
    } else if(c == ']'){
        int times = counts.top(); counts.pop();
        string prev = strs.top(); strs.pop();
        string repeated = "";
        for(int i=0; i<times; i++) repeated += current;
        current = prev + repeated;
    } else {
        current += c;
    }
}
return current;
    }
};