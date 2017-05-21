class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> v;
        
        for (unsigned i = 0; i < nums.size(); i++)
            v.insert({nums[i], i});  // <key:element, value:index>
        
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            auto it2 = v.find(target - *it);
            // the index in the vector can not be the same as in unordered_map
            if (it2 != v.end() && (it - nums.begin()) != it2->second) {
                ret.push_back(it - nums.begin());
                ret.push_back(it2->second);
                break;
            }
        }
        return ret;
    }
};

