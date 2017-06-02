class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        unsigned i, pos = 0;
        
        if (nums.empty()) return;
    
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                nums[pos++] = nums[i];
        }
    
        for (i = pos; i < nums.size(); i++)
            nums[i] = 0;
    }
};
