#605
class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        if n == 0:
            return True

        i = 0
        length = len(flowerbed)

        while i < length:
            if flowerbed[i] == 1:
                i += 2

            elif i + 1 < length and flowerbed[i + 1] == 1:
                i += 3

            else:
                n -= 1
                if n == 0:
                    return True
                i += 2

        return False