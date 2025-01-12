#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <unordered_set>

int main()
{
    std::unordered_map<char, std::string> morseCodeMap = {
    {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},  {'e', "."},
    {'f', "..-."}, {'g', "--."},  {'h', "...."}, {'i', ".."},   {'j', ".---"},
    {'k', "-.-"},  {'l', ".-.."}, {'m', "--"},   {'n', "-."},   {'o', "---"},
    {'p', ".--."}, {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
    {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"}, {'y', "-.--"},
    {'z', "--.."}
    };
    
    std::vector <std::string> words = {"gin","zen","gig","msg"};
    std::string strs;
    std::unordered_set <std::string> ans;

    if(!words.empty()){
        for(std::string word : words){
            strs = "";
            for(char c : word){
                strs = strs + morseCodeMap[c];
            }
            
        }
        
    }
    std::cout << ans.size();

    return 0;
}