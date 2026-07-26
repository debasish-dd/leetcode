class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<=k){
            ranges::reverse(s);
            return s; 
        }
    
        for(int p = 0;p<s.size();p+=2*k){
            int i = p;
            int j = min(i + k - 1, (int)s.size() - 1);
            if(j>s.size()) j = s.size();
            while(i<j){
            swap(s[i] , s[j]);
            j--;
            i++;
            }
        }
        return s;
    }
};