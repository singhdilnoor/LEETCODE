class Solution {
public:
    bool isValid(string s) {
        stack<char> opening;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                opening.push(s[i]);
            }
            else if (s[i]==')'){
                if(!opening.empty() && opening.top()=='(') opening.pop();
                else return false;
            }
            else if (s[i]=='}'){
                if(!opening.empty() && opening.top()=='{') opening.pop();
                else return false;
            }
            else if (s[i]==']'){
                if(!opening.empty() && opening.top()=='[') opening.pop();
                else return false;
            }
        }
        if (opening.empty()) return true;
        return false;
    }
};