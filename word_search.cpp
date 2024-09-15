#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main(){
    std::vector<char> board = {{'A', 'B', 'C', 'E'}, 
                               {'S', 'F', 'C', 'S'}, 
                               {'A', 'D', 'E', 'E'}};
    int count;
    std::string word = "ABCCED";
    
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            count = 1;
            if(board[i][j] == word[0]){
                while(count < word.length()){
                    in_board = true;
                    if(j + 1 < board[i].size() && word[count] == board[i][j + 1])
                        j = j + 1;
                    else if(j - 1 >= 0 && word[count] == board[i][j - 1])
                        j = j - 1;
                    else if(i + 1 < board.size() && word[count] == board[i + 1][j])
                        i = i + 1;
                    else if(i - 1 >= 0 && word[count] == board[i - 1][j])
                        i = i - 1;
                    else{
                        in_board = false;
                        break;
                    }
                    count ++;
                }
            }
        }
    }

    return 0;
}
