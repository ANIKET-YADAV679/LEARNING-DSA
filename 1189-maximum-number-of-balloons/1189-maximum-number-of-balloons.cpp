class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        
        std::unordered_map<char, int> textMap;
        for (char c : text) {
            textMap[c]++;
        }

        if (textMap.count('b') == 0 || 
            textMap.count('a') == 0 || 
            textMap.count('l') == 0 || 
            textMap.count('o') == 0 || 
            textMap.count('n') == 0) {
            return 0; 
        }

        int bCount = textMap['b'] / 1; 
        int aCount = textMap['a'] / 1; 
        int lCount = textMap['l'] / 2; 
        int oCount = textMap['o'] / 2; 
        int nCount = textMap['n'] / 1;

        return std::min({bCount, aCount, lCount, oCount, nCount});
    }
};

