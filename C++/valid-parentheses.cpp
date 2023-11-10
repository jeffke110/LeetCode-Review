#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(std::string s){
        
        stack <char> parenStack;
        unordered_map<char, char> parenMap;
        parenMap[')'] = '(';
        parenMap[']'] = '[';
        parenMap['}'] = '{';

        for(const auto& c: s){
            
            //check if c is an ( ')', ']', '}')
            if(parenMap.count(c) != 0){
                
                if(parenStack.empty() || parenStack.top() != parenMap[c]){
                    return false;
                }
                parenStack.pop();
            // if parenthese is open
            }else{
                parenStack.push(c);
            }
        }
        if(!parenStack.empty()){
            return false;
        }
        return true;
    }
};