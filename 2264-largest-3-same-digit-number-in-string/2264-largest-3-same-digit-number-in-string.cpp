class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1;
        char best = '\0';  // no triplet found yet
        for (int i = 1; i < num.size(); i++) {
            if (num[i] == num[i-1]) {
                count++;
                if (count == 3) {
                    if (best == '\0' || num[i] > best) {
                        best = num[i];
                    }
                }
            } else {
                count = 1;
            }
        }
        if (best == '\0') return "";
        return string(3, best);
    }
};