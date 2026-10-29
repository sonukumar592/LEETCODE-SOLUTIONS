class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty())
         return 0;
        int count=1;
        int max1=1;        
        for(int i=0;i<(int)nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                
            }else{
                 count=1;
            }
            max1=max(max1,count);
        }
        return max1;
    }
};