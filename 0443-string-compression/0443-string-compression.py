class Solution:
    def compress(self, chars: List[str]) -> int:
        if len(chars) == 1:
            return 1
            
        write = 0  
        front = 0
        back = 0   
        
        while front < len(chars):
            while front < len(chars) and chars[front] == chars[back]:
                front += 1
            chars[write] = chars[back]
            write += 1
            count = front - back
            if count > 1:
                for digit in str(count):
                    chars[write] = digit
                    write += 1
            back = front
            
        return write