class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        
        for(int i = 1; i < n; i++)
        {
            res[i] = res[i - 1] * nums[i - 1];
        }
        int reverse = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            res[i] = res[i]*reverse;
            reverse *= nums[i];
        }
        return res;
    }
};
