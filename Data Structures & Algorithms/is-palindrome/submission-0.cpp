class Solution {
public:
    bool isPalindrome(string s) {
        string filtered_s;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (isalnum(c))
                filtered_s += tolower(c);
        }
        
        return filtered_s == string(filtered_s.rbegin(), filtered_s.rend());
    }
};
