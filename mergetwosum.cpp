#include <vector>
#include <algorithm>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // Pointer to the last valid element in nums1
        int left = m - 1; 

        // Pointer to the first element in nums2
        int right = 0;   

        // Swap larger elements in nums1 with smaller elements in nums2
        while (left >= 0 && right < n) {
            if (nums1[left] > nums2[right]) {
                std::swap(nums1[left], nums2[right]); // Exchange out-of-order values
                left--;                               // Step back in nums1
                right++;                              // Step forward in nums2
            } else {
                break; // Remaining elements are already in correct relative partitions
            }
        }

        // Copy all elements from nums2 into the empty tail of nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // Sort the entire combined array to restore total order
        std::sort(nums1.begin(), nums1.end());
    }
};
