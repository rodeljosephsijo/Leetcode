class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result=[]
        m = max(candies)
        for i in candies:
            if i + extraCandies>= m:
                result.append(True)
            else:
                result.append(False)
        return result
