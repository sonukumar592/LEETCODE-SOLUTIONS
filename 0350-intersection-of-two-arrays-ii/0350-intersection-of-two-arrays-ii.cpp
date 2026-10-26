class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       multiset<int> s1(nums1.begin(),nums1.end());
       multiset<int> s2(nums2.begin(),nums2.end());
       vector<int> ans;
       set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(ans));
       return ans;
    }

};