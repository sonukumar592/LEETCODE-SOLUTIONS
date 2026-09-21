class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string a;
        int n = words.size();

        for(int i = 0; i < n; i++) {
            a += words[i];

            if(a == s) {
                return true;
            }

            if(a.size() > s.size()) {
                return false;
            }
        }

        return false;
    }
};