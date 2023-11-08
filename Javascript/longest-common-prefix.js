/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs){
    if(!strs){
        return "";
    }

    var prefix = strs[0];

    for(let i = 0; i< strs.length; i++){
        while(strs[i].slice(0, prefix.length) != prefix){
            prefix = prefix.slice(0, -1);
            if(!prefix){
                return "";
            }
        }
    }
    return prefix;

};