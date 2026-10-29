class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0;
        int sum2=0;
        vector<int>ans;
        vector<int>ans1;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                ans.push_back(i);
            }else{
                ans1.push_back(i);
            }
        }
        for(int i=0;i<ans.size();i++){
            sum1=sum1+ans[i];
        }
         for(int i=0;i<ans1.size();i++){
            sum2=sum2+ans1[i];
        }
        return sum2-sum1;
    }
};