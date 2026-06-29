class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0){
            int LD = x % 10;  

            if(rev>INT_MAX/10 || (rev == INT_MAX/10 && LD > 7))
            return 0;
            if(rev<INT_MIN/10 || (rev == INT_MIN/10 && LD < -8))
            return 0;

            rev = rev * 10 +LD;
            x = x / 10;
        }
        return rev;
        
    }
};