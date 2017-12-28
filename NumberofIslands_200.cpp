#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char> >& grid) 
    {
        int counter = 0;
        if (grid.empty() || grid[0].empty())
            return 0;
        else
        {
          for (int i = 0; i < grid.size(); i++)
              for (int j = 0; j < grid[0].size(); j++)
                  if (grid[i][j] == '1')
                  {
                    DFSFill(grid, i, j);
                    counter++;
                  }
          return counter;
        }
    }
    void DFSFill(vector<vector<char> >&grid, int i, int j)
    {
      if (i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == '1')
      {
        grid[i][j] = '0';
        DFSFill(grid, i + 1, j);
        DFSFill(grid, i - 1, j);
        DFSFill(grid, i , j + 1);
        DFSFill(grid, i , j - 1);
      }
    }
};

int main()
{
  Solution s;
  vector<vector<char> > v; 
  cout << s.numIslands(v) << endl;
}