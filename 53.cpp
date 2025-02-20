class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max1 = nums[0];
        int sum1 = nums[0];
        for (int i = 1; i < n; i++) {
            if (sum1 < 0) {
                sum1 = 0;
            }
            sum1 += nums[i];
            max1 = max(max1, sum1);
        }
        return max1;
    }
};
*test case*
  
Case 1
Case 2
Case 3
Input
nums =
[-2,1,-3,4,-1,2,1,-5,4]
Output
6
Expected
6
