class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long rev = 0;
        int d;
        while(n>0)
        {
            d = n%10;
            rev = rev*10+d;
            n = n/10;
        }
        if (rev == x){
            return true ;
        } else {
            return false;
        }
    }
};
