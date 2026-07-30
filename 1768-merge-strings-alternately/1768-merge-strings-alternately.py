#1768s
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = []

        # Find the length of the shorter word
        min_length = min(len(word1), len(word2))

        # Loop exactly min_length times
        for i in range(min_length):
            result.append(word1[i])
            result.append(word2[i])

        # Slice and append the remaining chunks.
        # (If a word is out of letters, the slice just returns an empty string "")
        result.append(word1[min_length:])
        result.append(word2[min_length:])

        return "".join(result)