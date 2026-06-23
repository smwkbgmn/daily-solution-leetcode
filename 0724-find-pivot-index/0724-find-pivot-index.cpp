class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_r = accumulate(nums.begin(), nums.end(), 0);
        int total_l = 0;

        for (auto i = 0; i < nums.size(); ++i) {
            total_r -= nums[i];
            if (total_r == total_l) {
                return i;
            }
            total_l += nums[i];
        }
        return -1;
    }
};