class Solution:
    def reverseVowels(self, s: str) -> str:
        vlist = []
        result = ''

        vowels = 'aeiouAEIOU' 

        for i in range(len(s)-1, -1, -1):
            if s[i] in vowels:
                vlist.append(s[i]) 

        ptr = 0 

        for i in s:
            if i in vowels:
                result += vlist[ptr]
                ptr += 1
            else:
                result += i
                
        return result