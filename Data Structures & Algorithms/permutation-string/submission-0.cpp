class Solution {
public:

// Store frequency of all characters of s1 using a frequency array.
// Use a fixed-size sliding window of size:

// on s2 and maintain its frequency array.

// Add the current character to the window and remove the extra left character when window size exceeds s1.size().
// If both frequency arrays become equal, then a permutation of s1 exists in s2.
    bool checkInclusion(string s1, string s2) {

        if(s2.length() < s1.length()) return false;

        //store the frequency of the string s1

        vector<int>freq1(26,0);
        

        for(char ch:s1 ){
            freq1[ch -'a']++;
        }

        int k = s1.size();

        //Now we create an another vector to maintain the windowsize
        vector<int>freq2(26,0);

        for(int i=0;i<s2.size();i++){

            freq2[s2[i] - 'a']++;

            //remove extra character 
            if(i >= k){
                freq2[s2[i - k] -'a']--;

            }

            //compare the window 
            if(freq1 == freq2) return true;
        }


        return false;


    
        
    }
};
