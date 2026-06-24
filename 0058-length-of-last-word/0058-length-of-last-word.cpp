class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (length > 0) {
                    break;
                }
            } else {
                length++;
            }
        }
        
        return length;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna