
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>ans;
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(ans));
        return ans;
        // vector<int> ans;

        // for(int i = 0; i < nums1.size(); i++) {
        //     for(int j = 0; j < nums2.size(); j++) {
        //         if(nums1[i] == nums2[j]) {
        //             ans.push_back(nums1[i]);
        //         }
        //     }
        // }

        // set<int> s(ans.begin(), ans.end());

        // vector<int>v(s.begin(), s.end());
        // return v;
    }
};

