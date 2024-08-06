class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        int ty, by, lx, rx;
        ty = 1e9;
        by = 0;
        lx = 1e9;
        rx = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    ty = min(ty, j);
                    by = max(by, j);

                    lx = min(lx, i);
                    rx = max(rx, i);
                }
            }
        }

        return (by-ty+1)*(rx-lx+1);
    }
};