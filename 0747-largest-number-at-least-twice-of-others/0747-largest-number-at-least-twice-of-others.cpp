class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
            
        }
        for(int i = 0; i < n; i++) {
            if (nums[i]!=mx && mx < nums[i] * 2) {
                return -1;
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]==mx){
                return i;
    
            }
        }
        return -1;
    }  
};