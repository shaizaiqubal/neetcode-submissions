class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        int i =0;
        
        while(s[i]!='\0'){
            if(isalnum((unsigned char)s[i])){
                s[j]=tolower(s[i]);
                j++;
            }
            i++;
        }

        int left = 0;
        int right = j-1;

        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
