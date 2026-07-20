class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev=str(x)
        rev=rev[::-1]
        if x<0: 
            return(False)
        elif x==0:
            return(True)
        elif x==int(rev):
            return(True)
        else:
            return(False)