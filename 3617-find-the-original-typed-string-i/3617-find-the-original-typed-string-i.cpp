class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1;
        int cnt = 1;
        char ch = word[0];

        for(int i=1;i<word.size();i++){
            if(word[i]==ch){
                cnt++;
            }
            else{
                ans+=(cnt - 1);
                ch = word[i];
                cnt=1;
            }    
        }

        ans += (cnt-1);
        return ans;
    }
};