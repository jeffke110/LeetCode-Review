/**
 * @param {string} s
 * @return {number}
 */

var romanToInt = function(s){

    const romanMap = {
        'I' : 1,
        'V' : 5,
        'X' : 10,
        'L' : 50,
        'C' : 100,
        'D' : 500,
        'M' : 1000,
    }

    var sum = 0;
    var size = s.length;

    for(let i = 0; i < size; i++){
        if(i < s.length - 1 && romanMap[s[i]] < romanMap[s[i + 1]]){
            sum -= romanMap[s[i]];
        }else{
            sum += romanMap[s[i]];
        }

    }
    return sum; 


};