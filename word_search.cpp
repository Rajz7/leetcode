#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main(){
    std::vector<std::vector<char>> board = {{'A', 'B', 'C', 'E'}, 
                                            {'S', 'F', 'C', 'S'}, 
                                            {'A', 'D', 'E', 'E'}};
    int count;
    std::string word = "ABCCED";
    bool in_board = false;

    for(int x = 0;x < board.size(); x++){
        for(int y = 0; y < board[x].size(); y++){
            count = 1;
            std::cout << x << " " << y << " ";
            if(board[x][y] == word[0]){
                int i = x;
                int j = y;
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
            if(count == word.length())
                break;
        }
        if(count == word.length())
            break;
    }
    std::cout << in_board;
    return 0;
}
