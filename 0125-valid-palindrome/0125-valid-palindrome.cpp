class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string t;
        for(auto x:s){
            if(isalnum(x)){
                t.push_back(tolower(x));
            }
        }

        int left=0;
        int right=t.length()-1;
        while(left<right){
            if(t[left]!=t[right]){
            return false;
            }
            left++;
            right--;
        }
        
        return true;


        // string r=t;
        // reverse(t.begin(),t.end());
        // return t==r;

    }
};