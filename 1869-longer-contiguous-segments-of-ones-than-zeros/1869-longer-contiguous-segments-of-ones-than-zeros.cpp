class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.length();
        int count1 = 0;
        int count2 = 0;
        int max1 = 0;
        int max2 = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count1++;
                max1 = max(max1, count1);
                count2 = 0;
            } else {
                count2++;
                max2 = max(max2, count2);
                count1 = 0;
            }
        }

        return max1 > max2;
    }
};

