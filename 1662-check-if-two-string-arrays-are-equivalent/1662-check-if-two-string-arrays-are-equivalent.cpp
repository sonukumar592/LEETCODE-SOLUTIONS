class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a;
        string b;
        int n=word1.size();
        int t=word2.size();

        for(int i=0;i<n;i++){
           a+= word1[i];
           
        }
        for(int i=0;i<t;i++){
           b+= word2[i];
           
        }
        if(a==b){
            return true;
        }
        return false;
    }
};