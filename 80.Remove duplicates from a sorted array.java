class Solution {
    public int removeDuplicates(int[] nums) {
        int k =2;
        for(int i =2 ;i<nums.length;i++)
        {
            if(nums[i] != nums[k-2])// in this k in a index of 2 at i =0
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
}
