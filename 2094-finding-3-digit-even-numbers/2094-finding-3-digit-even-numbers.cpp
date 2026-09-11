class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        
        // Count the frequencies of each digit available in the input
        vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }
        
        // Loop through all valid even 3-digit numbers
        for (int num = 100; num < 1000; num += 2) {
            int hundreds = num / 100;
            int tens = (num / 10) % 10;
            int units = num % 10;
            
            // Temporary frequency map for the current number
            vector<int> num_count(10, 0);
            num_count[hundreds]++;
            num_count[tens]++;
            num_count[units]++;
            
            // Verify if the input has enough digits to form 'num'
            if (num_count[hundreds] <= count[hundreds] &&
                num_count[tens] <= count[tens] &&
                num_count[units] <= count[units]) {
                res.push_back(num);
            }
        }
        
        return res;
    }
};
