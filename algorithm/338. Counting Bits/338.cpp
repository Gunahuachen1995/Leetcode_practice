class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> bits_cnt(num+1, 0); 
        for (int i=1; i<=num; i++) {
            bits_cnt[i] = bits_cnt[i >>1] + i%2;
        }
        return bits_cnt;
    }
};
