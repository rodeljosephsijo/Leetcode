class Solution {
public:
 
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += (num & 1); 
            num = num >> 1;     
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        
        for (int i = 0; i <= n; i++) {
            ans[i] = countSetBits(i);
        }
        
        return ans;
    }
};