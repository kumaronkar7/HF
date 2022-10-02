//https://leetcode.com/problems/game-of-life/
class Solution {
public:
    int countNei(int row,int col,int n,int m,vector<vector<int>>& board)
    {
        int cnt=0;
        for(int i=row-1;i<=row+1;i++)
        {
            for(int j=col-1; j<=col+1; j++)
            {
                if(i<0 || i>=n || j<0 || j>=m || board[i][j]==0 || (i==row && j==col))
                    continue;
                else if(board[i][j]==1 || board[i][j]==3)
                    cnt++;
            }
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        
        /*table
        original  -- new -- value
             0        0      0
             1        0      1
             0        1      2
             1        1      3
        */
        
        int n=board.size();
        int m=board[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int nei = countNei(i,j,n,m,board);
                if(board[i][j]==1)
                {
                    if(nei==2 || nei==3)
                        board[i][j] = 3;
                }
                else
                    if(nei == 3)
                        board[i][j] = 2;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
               if(board[i][j]==2 || board[i][j]==3)
                   board[i][j]=1;
               else if(board[i][j]==1)
                   board[i][j]=0;
            }
        }
    }
};