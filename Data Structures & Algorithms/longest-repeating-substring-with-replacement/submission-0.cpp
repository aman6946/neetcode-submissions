class Solution {
public:
// Use a sliding window and store frequency of characters inside the window.
// Keep track of the most frequent character (maxFreq) in the current window.
// If:

// (Window Size−Max Frequency)>k

// then shrink the window from the left.

// Update maximum valid window length during traversal.
    int characterReplacement(string s, int k) {

      vector<int>freq(26,0);

      int left = 0;
      int max_freq = 0;
      int max_len = 0;

      for(int right=0;right<s.size();right++){

        //store the freq
        freq[s[right] - 'A']++;

        max_freq = max(max_freq,freq[s[right]- 'A']);

        //if the window become invalid 
        while((right-left+1) - max_freq > k){
            freq[s[left] - 'A']--;
            left++;
        }

        max_len = max(max_len , right-left+1);
        


      }

      return max_len ;
    }
};
