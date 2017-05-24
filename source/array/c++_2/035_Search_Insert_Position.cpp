class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // An iterator to the lower bound of target in the range.
        auto low = std::lower_bound(nums.begin(), nums.end(), target);
        return low - nums.begin();
    }
};
