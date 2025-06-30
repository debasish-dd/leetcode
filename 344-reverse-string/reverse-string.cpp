class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = 0;
        int i = s.size() -1;
       while(j<=i){
        swap(s[j], s[i]);
        j++;
        i--;
       }
        
    }
};