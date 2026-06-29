class Solution {
public:
    bool isPalindrome(int n) {
        long long revnum = 0;
        int dup = n;
        while(n>0){
            int LD = n%10;
            revnum = (revnum*10)+LD;
            n=n/10;

        }
        if(dup==revnum)
            return true;
        else
            return false;

    }
};