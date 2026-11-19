class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int s=1,sum=0;
        for(auto x:nums) sum +=x*s,s*=-1;
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna