class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9], col[9], box[9];
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j] == '.') continue;
                char num = board[i][j];
                int ind = (i/3) * 3 + (j/3);
                if(rows[i].count(num) || col[j].count(num) || box[ind].count(num)){
                    return false;
                }
                rows[i].insert(num);
                col[j].insert(num);
                box[ind].insert(num);
            }
        }
        return true;
    }
};