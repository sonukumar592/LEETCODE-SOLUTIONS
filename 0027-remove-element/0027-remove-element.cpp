class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
       
        // vector<int>ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=val){
        //         ans.push_back(nums[i]);
        //     }
        // }

        // for(int i=0;i<ans.size();i++){
        //     nums[i]=ans[i];
        // }
        //   return ans.size();
        return j;
        
    }
};