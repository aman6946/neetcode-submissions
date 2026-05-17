class Solution {
public:
// Store frequency of all characters of t.
// Expand sliding window using right pointer.
// When all characters match (count == 0), shrink from left.
// Keep updating the minimum valid window substring.
    string minWindow(string s, string t) {

        unordered_map<char,int>mp;

        for(char ch : t){
            mp[ch]++;
        }

        int count = mp.size();

        int left = 0;
        int start = 0;

        int min_window = INT_MAX;

        for(int right=0;right<s.size();right++){

            if(mp.find(s[right]) != mp.end()){

                mp[s[right]]--;

                if(mp[s[right]] == 0){
                    count--;
                }
            }

            while(count == 0){

                if(right-left+1 <= min_window){
                    min_window = right-left+1;
                    start = left;
                }

                //Now we have to shrink the window to minimize the length
                if(mp.find(s[left]) != mp.end()){

                    mp[s[left]]++;
                    if(mp[s[left]] > 0){
                        count++;
                    }
                }
                left++;
            }
        }
        return min_window == INT_MAX ? "" :s.substr(start,min_window);
    }
};
