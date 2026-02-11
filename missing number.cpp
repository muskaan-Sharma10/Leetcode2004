class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        //expected sum
        int expectedSum = n * (n + 1) / 2;

        //  actual sum
        int actualSum = 0;
        for (int x : nums) {
            actualSum += x;
        }

       // missing number
        return expectedSum - actualSum;
    }
};
