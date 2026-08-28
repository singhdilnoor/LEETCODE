#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        // Loop through both strings from right to left
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            
            if (i >= 0) sum += a[i--] - '0'; // Convert char to int
            if (j >= 0) sum += b[j--] - '0'; // Convert char to int
            
            carry = sum / 2;                 // Calculate new carry (0 or 1)
            result += std::to_string(sum % 2); // Append binary digit (0 or 1)
        }

        // The result is built backwards, so reverse it at the end
        std::reverse(result.begin(), result.end());
        return result;
    }
};
