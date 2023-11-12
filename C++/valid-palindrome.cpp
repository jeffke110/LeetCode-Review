#include <string>
#include <algorithm>

using namespace std;


template <typename T>
bool notAlphaNumeric(T character){
    return !std::isalnum(character);
}


class Solution {
public:

    bool isPalindrome(string input) {
        //convert to lower case
        transform(input.begin(), input.end(), input.begin(), ::tolower);

        //remove non alpha numeric
        auto iter = remove_if(input.begin(), input.end(), notAlphaNumeric<char>);
        input.erase(iter, input.end());

        string reversed = input;
        reverse(reversed.begin(), reversed.end());

        if(reversed == input){
            return true;
        }else{
            return false;
        }



    }
};