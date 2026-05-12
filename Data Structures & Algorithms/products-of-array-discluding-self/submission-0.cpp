class Solution {
public:

// PRODUCT OF ARRAY EXCEPT SELF

// Main Idea:
// answer[i] = left product × right product

// -----------------------------------

// PREFIX PATTERN (Left → Right)

// int prefix = 1;

// for(int i = 0; i < n; i++) {

//     ans[i] = prefix;

//     prefix *= nums[i];
// }

// Meaning:
// Store left product before current index

// -----------------------------------

// SUFFIX PATTERN (Right → Left)

// int suffix = 1;

// for(int i = n - 1; i >= 0; i--) {

//     ans[i] *= suffix;

//     suffix *= nums[i];
// }

// Meaning:
// Multiply right product after current index

// -----------------------------------

// MEMORY TRICK

// Prefix  → store first, then update
// Suffix  → use first, then update

// -----------------------------------

// STARTING VALUES

// Addition       → 0
// Multiplication → 1

// -----------------------------------

// TIME COMPLEXITY

// O(n)

// SPACE COMPLEXITY

// O(1)
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int>ans(n,1);

        int prefix = 1;

        for(int i=0;i<n;i++){ //from left to right
            ans[i] = prefix;
            prefix *= nums[i];
        }

        //Now we will do suffix 
        int suffix = 1;

        for(int i=n-1;i>=0;i--){ //from right to left
         
         ans[i] *= suffix;
         suffix *= nums[i];

        }

        return ans ;

    }
};
