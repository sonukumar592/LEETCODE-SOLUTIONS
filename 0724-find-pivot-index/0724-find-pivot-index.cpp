class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum = 0;
        int sum2;

        for(int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }

        for(int i = 0; i < n; i++) {
            sum2 = sum - sum1 - nums[i];

            if(sum1 == sum2) {
                return i;
            }

            sum1 = sum1 + nums[i];
        }

        return -1;
    }
};