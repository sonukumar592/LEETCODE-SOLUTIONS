class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        
            int x=nums[i];
            while(x>0){
                int a=x%10;
                sum1=sum1+a;
                x=x/10;
            }
        }
         return abs(sum-sum1);
    }
};