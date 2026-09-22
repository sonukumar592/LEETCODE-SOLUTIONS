class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";

        string rem = "";
        bool neg = num < 0;

        if(num < 0)
            num = -num;

        while(num > 0) {
            int a = num % 7;
            rem = to_string(a) + rem;
            num = num / 7;
        }

        if(neg)
            rem = "-" + rem;

        return rem;
    }
};