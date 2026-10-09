class Solution {
public:
    bool isOK(vector<vector<char>>& board,int r,int c, char ch){
        for(int i=0;i<9;i++){
            if(board[r][i]==ch) return false;
            if(board[i][c]==ch) return false;
        }
        int br = (r/3)*3;
        int bc = (c/3)*3;
        for(int i =0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[br+i][bc+j]==ch)return false;
            }
        }
        return true;
    }
    bool sol(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char ch = '1';ch<='9';ch++){
                        if(isOK(board,i,j,ch)){
                            board[i][j]=ch;
                            if(sol(board)) return true;
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sol(board);
    }
};