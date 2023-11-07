#include <iostream>
#include <unordered_map>

class Solution {

/*
Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/
public:
    int romanToInt(std::string inputString){
        std::unordered_map<char, int> romanMap;
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;

        int sum = 0;
        for(int i = 0; i < inputString.size(); i++){
            if(i < inputString.size() - 1 && romanMap[inputString[i]]  < romanMap[inputString[i + 1]]){
                sum -= romanMap[inputString[i]];
            }else{
                sum += romanMap[inputString[i]];
            }
        }

        return sum;
    }
};
