#1071
import math

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        len1, len2 = len(str1), len(str2)
        total_len = len1 + len2
        for i in range(total_len):
    
            if i < len1:
                char1 = str1[i]
            else:
                char1 = str2[i - len1]
            if i < len2:
                char2 = str2[i]
            else:
                char2 = str1[i - len2]

            if char1 != char2:
                return ""

        gcd_len = math.gcd(len1, len2)
        return str1[:gcd_len]