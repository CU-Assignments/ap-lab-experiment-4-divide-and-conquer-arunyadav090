class Solution {
public:
    int reversePairs(vector<int>& a) {
        int ans = 0;  
        int n = a.size(); 
        vector<long long> v;  
       
        for (int i = n - 1; i >= 0; i--) {
            // Find the number of elements in the sorted list that are less than a[i]
            ans += lower_bound(v.begin(), v.end(), a[i]) - v.begin();

            // Insert the current element transformed as 2 * a[i] into the sorted list
            v.insert(lower_bound(v.begin(), v.end(), 2LL * a[i]), 2LL * a[i]);
        }

        return ans;  // Return the total count of reverse pairs
    }
};


*test case*
  
Case 1
Case 2
Input
nums =
[1,3,2,3,1]
Output
2
Expected
2
