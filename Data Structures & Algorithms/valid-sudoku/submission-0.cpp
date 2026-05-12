class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //Now first I have to check for the Row 

        for(int i=0;i<9;i++){

            unordered_set<char>row;
            for(int j=0;j<9;j++){

                if(board[i][j] == '.') continue;

                if(row.find(board[i][j]) != row.end()) return false;

                row.insert(board[i][j]);

            }
        }

        //Now we have to check for the columns
        for(int j=0;j<9;j++){

            unordered_set<char>column;
            for(int i=0;i<9;i++){

                if(board[i][j] == '.') continue;

                if(column.find(board[i][j]) != column.end()) return false;

                column.insert(board[i][j]);
            }
        }

        //Now we have to check for the boxes 3*3
        for(int row=0;row<9; row +=3 ){
            for(int col=0;col<9;col+=3){

                unordered_set<char>box;

                //This is the outer loop where we have divided the box into 3*3 parts

                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){

                        if(board[i][j] == '.') continue;

                        if(box.find(board[i][j]) != box.end()) return false;

                        box.insert(board[i][j]);

                    }
                }
            }
        }

        return true;
        
    }
};
