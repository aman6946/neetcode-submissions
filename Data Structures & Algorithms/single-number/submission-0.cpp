class Solution {
public:
// XOR Properties

// Important rules:

// a⊕a=0

// a⊕0=a

// So duplicate numbers cancel each other.
    int singleNumber(vector<int>& nums) {

       int ans = 0;

       for(int num : nums){
         
         ans ^= num;
       }

       return ans;
    }
};
