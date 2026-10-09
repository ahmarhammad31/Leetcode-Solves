class Solution {
public:
    vector<vector<string>> res;
    vector<string> board;
    bool col[9],d1[17],d2[17];
    int n;
    bool isOK(int r,int c){
        return !col[c] && !d1[r-c+n-1] && !d2[r+c];
    }
    void validate(int r){
        if(r==n)
        {
            res.push_back(board);
            return ;
        }
        for(int i=0;i<n;i++){
            if(isOK(r,i))
            {
                board[r][i]='Q';
                col[i]= d1[r-i+n-1]=d2[r+i]=true;
                validate(r+1);
                board[r][i]='.';
                col[i]=d1[r-i+n-1]=d2[r+i]=false;
            }
        }        
    }
    vector<vector<string>> solveNQueens(int n) {
        this->n=n;
        board=vector<string>(n,string(n,'.'));
        for(int i =0;i<9;i++) col[i] =false;
        for(int i=0;i<17;i++) d1[i] = d2[i] = false;
        validate(0);
        return res;
    }
};