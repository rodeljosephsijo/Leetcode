class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        evennos = 0
        for i in nums:
            divs = 0
            while i != 0:
                i = i // 10  
                divs += 1
            if divs % 2 == 0:
                evennos += 1
        return evennos