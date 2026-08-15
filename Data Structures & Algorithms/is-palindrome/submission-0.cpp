class Solution {
   public:
    bool isPalindrome(string s) {
        string ss = "";
        for (char c: s) {
            if (isalnum(c)) ss += tolower(c);
        }
        if (ss == string(ss.rbegin(), ss.rend())) return true;

        return false;
    }
};
