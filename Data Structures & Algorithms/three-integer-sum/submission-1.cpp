class Solution {
public:
// Most Important Observation
// 3Sum = Two Sum + Loop

// We fix one number first,
// then solve remaining part using Two Pointers
    vector<vector<int>> threeSum(vector<int>& nums) {

        //first sort the array 
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;

        int n = nums.size();
        //we fix one loop and use two pointer 

        for(int i=0;i<n;i++){

            //Remove the Duplicate

            if(i>0 && nums[i] == nums[i-1]) continue;

            int left = i+1;
            int right = n-1;

            while(left < right){

                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    ans.push_back({nums[i],nums[left],nums[right]});

                    //Now skip the left duplicate element 
                    while(left < right && nums[left] == nums[left+1]) left++;

                    //Now skip right duplicate element 
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;

                }

                else if(sum < 0) left++;

                else right--;
            }
        }
        return ans;
    }
};
