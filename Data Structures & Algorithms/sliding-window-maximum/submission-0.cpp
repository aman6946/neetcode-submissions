class Solution {
public:
// Use a sliding window of size k and a deque to store useful indices.
// Deque always stores elements in decreasing order of values.
// Remove smaller elements from the back because they can never become maximum.
// Remove front elements if they go outside the current window.
// Front of deque always contains the maximum element of the current window.
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int>dq;
        vector<int>ans;

        int left = 0;

        for(int right=0;right<nums.size();right++){

          //remove Smaller Element 
          while(!dq.empty() && nums[dq.back()] < nums[right]){

            dq.pop_back();
          }

          //Push Current Index
          dq.push_back(right); //we are pushing only the index not the number because the deque only store the index not the number 

          // remove out of window element 
          if(dq.front() <  left){
            dq.pop_front();
          }

          //window size becomes k 
          if(right-left+1 == k){
            ans.push_back(nums[dq.front()]);

            left++;
          }
        }

        return ans ;
    }
};
