
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < 2; i++) {
            for (int num : nums) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna