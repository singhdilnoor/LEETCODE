class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26]={0};
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }
        vector<int> res;
        int start=0, end=0;
        for(int j=0;j<s.size();j++){
            end=max(end,last[s[j]-'a']);
            if(j==end){
                res.push_back(end-start+1);
                start=j+1;
            }
        }
        return res;
    }
};