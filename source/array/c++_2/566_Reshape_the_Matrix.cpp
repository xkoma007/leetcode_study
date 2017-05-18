class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		if (nums.size() * nums[0].size() != r * c)
			return nums;
			
		vector<vector<int>> ret;
		int rcount = 0;  // new matrix row number
		int ccount = 0;  // new matrix column number
		vector<int> temp;
					
		for (auto& x: nums) {
			if (rcount < r) {
				for (auto& y: x) {
					if (ccount < c) {
						temp.push_back(y);
						ccount++;
						if (ccount == c) {
							ret.push_back(temp);
							temp.clear();
							ccount = 0;
							rcount++;
						}
					}
				}
			}
		}
		return ret;
	}
};
