class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>a(candyType.begin(),candyType.end());
        int n=candyType.size()/2;
        int b=a.size();
        return min(n,b);
    }
};