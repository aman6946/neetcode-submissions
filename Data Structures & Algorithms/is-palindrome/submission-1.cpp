class Solution {
public:
    bool isPalindrome(string s) {

        //Here we will use the simple approach Two pointer 

        int left = 0;
        int right = s.size()-1;

        while(left < right){

            //skip all non-alphanumeric character

            while(left < right && !isalnum(s[left])){
                left++; //It means we have to skip while moving left to right
            }

            while(left < right && !isalnum(s[right])){
                right--; //It means we have to skip while moving right to left
            }

            //Now convert it into the to lowercase

            if(tolower(s[left]) != tolower(s[right])) return false;

            left++;right--;


        }
        return true;
        
    }
};
