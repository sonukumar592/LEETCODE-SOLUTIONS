class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        vector<int>ans;
        for(int x:s){
            ans.push_back(x);
        }
        int n=ans.size();
        for (int i = 0; i < n; i++) { 
            nums[i] = ans[i];
             }
        return n;

        
    }
};