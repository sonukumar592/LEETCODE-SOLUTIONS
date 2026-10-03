class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        int i=0;
        int j=n;
        while(i<n){
            ans[i]=nums[i];
            ans[j]=nums[i];

            i++;
            j++;
        }
        //for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // return ans;
        return ans;
    }
};