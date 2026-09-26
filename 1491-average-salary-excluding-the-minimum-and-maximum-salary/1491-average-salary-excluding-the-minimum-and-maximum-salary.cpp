class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int a=*min_element(salary.begin(), salary.end());
        int b=*max_element(salary.begin(), salary.end());
        double total=0;
        for(int i=0;i<n;i++){
            total+=salary[i];
        }
        return (total-a-b)/(n-2);
    }
};