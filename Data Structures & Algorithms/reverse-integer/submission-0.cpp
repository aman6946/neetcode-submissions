class Solution {
public:
    int reverse(int x) {

        
        int rev_No = 0;

        while(x != 0){

            int last_digit = x%10;

            //Overflow Check 
            if(rev_No > INT_MAX/10 || rev_No < INT_MIN/10){
                return 0;
            }
            rev_No = rev_No * 10 + last_digit;

            x/=10;
        }

        return rev_No;

    
        
    }
};
