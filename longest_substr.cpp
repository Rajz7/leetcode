#include <iostream>
#include <unordered_map>
#include <string>
#include<vector>

int main(){
    std::string s = "au";
    int max_len = 0;
    int left = 0;
    std::unordered_map<char, int> umap;
    
    if(!s.empty()){
        for(int right = 0; right < s.length(); right++){
            if(umap[s[right]] == 1){
                
            }
            else{
                umap[s[right]] = 1;
            }
        }   
    }
    
    std::cout << max_len;

    return 0;
}


