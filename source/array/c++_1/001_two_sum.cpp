class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int, int> tmpmap;
			unordered_map<int, int>::iterator mapitr;
			for(auto i=0; i<nums.size(); ++i) {
				tmpmap[nums[i]] = i;
			}
			for(auto i=0; i<nums.size(); ++i) {
				auto tmp = target - nums[i];
				if((mapitr = tmpmap.find(tmp)) != tmpmap.end()) {
					std::vector<int> res;
					res.push_back(mapitr->second);
					res.push_back(i);
					return res;
				}
			}
		}
};
