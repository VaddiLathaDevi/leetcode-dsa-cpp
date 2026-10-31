class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0; // Position to insert the next non-zero element
        
        // Step 1: Move non-zero elements forward
        for (int num : nums) {
            if (num != 0) {
                nums[insertPos++] = num;
            }
        }
        
        // Step 2: Fill remaining positions with zeroes
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};