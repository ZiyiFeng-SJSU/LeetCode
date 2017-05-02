#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target)
  {
  //  unordered_map<int, int> hash;
    vector <int> results;
    for (int i = 0; i < nums.size(); i++)
    {
      int find = target - nums[i];
      for (int j = i; j < nums.size(); j++)
      {
        if (nums[j] == find)
        {
          results.push_back(j+1);
          results.push_back(i+1);
          return results;
        }
      }
    }
    cout << "Can't find any." << endl;
    return results;
  }
};

int main()
{
  vector<int> v = {2, 7, 11, 15};

  clock_t startTime = clock();

  Solution S;
  vector<int> res;
  
  res = S.twoSum(v,9);
  if (res.size() > 0)
  {
    cout << "First index: " << res.back() << ": " << v[res.back() - 1] << endl;
    cout << "Second index: " << res.front() << ": " << v[res.front() - 1] << endl;
    cout << "Result = " << v[res.back() - 1] + v[res.front() - 1] << endl;
    cout << "Size = " << res.size() << endl;
    res.clear();
  }
  double elapsedSeconds = (double)(clock() - startTime) / CLOCKS_PER_SEC;
  cout << "RUN TIME: " << elapsedSeconds << endl;
}

