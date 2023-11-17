class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        i = 0
        j=len(nums)-1
        min_max = 0
        while(i<j):
            sum = nums[i]+nums[j]
            if(min_max<sum):
                min_max = sum
            i+=1
            j-=1
        return min_max