class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0, k = 0, n = nums.length;
        for (; i < n; i++) {
            if (nums[i] == val) {
                continue;
            }
            nums[k++] = nums[i];
        }
        return k;
    }
}