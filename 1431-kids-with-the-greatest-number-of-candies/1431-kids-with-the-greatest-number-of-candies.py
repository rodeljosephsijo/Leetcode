class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m = max(candies)
        # This loops through 'candies' and directly builds a list of True/False values
        return [candy + extraCandies >= m for candy in candies]
