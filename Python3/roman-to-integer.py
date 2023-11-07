class Solution:
    def romanToInt(self, s: str) -> int:
        dictionary: dict = {}
        dictionary['I'] = 1
        dictionary['V'] = 5
        dictionary['X'] = 10
        dictionary['L'] = 50
        dictionary['C'] = 100
        dictionary['D'] = 500
        dictionary['M'] = 1000
        
        sum = 0
        index = 0
        size = len(s)
        for roman in s:
            
            if index < size - 1 and dictionary[roman] < dictionary[s[index + 1]]:
                sum = sum - dictionary[roman]
            else:
                sum = sum + dictionary[roman]
            index = index + 1
            
        return sum