#151
class Solution:
    def reverseWords(self, s: str) -> str:
        words = []
        current_word = ""
        for char in s:
            if char != ' ':
                current_word += char
            elif current_word:
                words.append(current_word)
                current_word = ""
        if current_word:
            words.append(current_word)
        left = 0
        right = len(words) - 1
        while left < right:
            words[left], words[right] = words[right], words[left]
            left += 1
            right -= 1
        return " ".join(words)