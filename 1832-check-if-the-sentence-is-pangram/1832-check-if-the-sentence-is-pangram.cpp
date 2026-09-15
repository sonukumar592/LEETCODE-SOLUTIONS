class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int>s(sentence.begin(),sentence.end());
        if(s.size()==26){
            return true;
        }else{
            return false;
        }

    }
};