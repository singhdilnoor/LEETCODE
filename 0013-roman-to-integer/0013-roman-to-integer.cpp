class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int val[128] = {};
        val['I']=1; val['V']=5; val['X']=10; val['L']=50;
        val['C']=100; val['D']=500; val['M']=1000;
        for(int i=0;i<s.size()-1;i++){
            if(val[s[i]]<val[s[i+1]])sum-=val[s[i]];
            else sum+=val[s[i]];
        }
        sum+=val[s[s.size()-1]];
        return sum;
    }
};