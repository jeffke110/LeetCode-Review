from typing import List

class Solution:
    
    def twoSum(self, nums: List[int], target : int ) -> List[int]:
        dictionary : dict = []
        index : int = 0
        
        for number in nums:
            
            if number in dictionary.values():
                return [index, nums.index(target - number)]
            else:
             dictionary[number] = target - number
            
            index = index + 1
            
        return []
        
        