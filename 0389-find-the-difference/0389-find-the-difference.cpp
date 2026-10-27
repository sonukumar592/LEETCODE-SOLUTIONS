class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset<char>s1(s.begin(),s.end());
        multiset<char>s2(t.begin(),t.end());
        vector<char>ans;
        set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),back_inserter(ans));
        return ans[0];
    }
};