class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maximum = *max_element(candies.begin(), candies.end());
        vector<bool>ans;
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maximum){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};