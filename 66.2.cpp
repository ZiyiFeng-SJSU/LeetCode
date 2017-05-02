#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
      std::vector<int> result;
      int flag,counter = 0;

     
      if (digits.back() < 9)//if not 9
        digits.back() += 1;//we can just add one
      else//if it is 9
      {
        for (std::vector<int>::reverse_iterator it = digits.rbegin(); it != digits.rend(); ++it)//tranverse to find the next not 9 digit
        {
//cout << "iterator = " << *it << endl;

          if (*it == 9)//set consistance 9 to 0
          {
//cout << "here" << endl;
            *it = 0;
            counter++;
            flag = 0;
          }
          else//until we find the non-9 digit, plus 1
          {
            *it += 1;
            flag = 1;
            break;
          }
        }
      }
//cout << "Flag = " << flag << endl;
        if (!flag)//if there is not non 9 digit.
        {
//cout << "here" << endl;
          
          digits.clear();
          digits.push_back(1);
          for (int i = 0; i < counter; ++i)
            digits.push_back(0);

        }
        for (std::vector<int>::iterator it = digits.begin(); it != digits.end(); ++it)
          result.push_back(*it);

        digits.clear();
    return result;
    }
};


int main()
{
  vector<int> a = {9,9};
//cout << "Size = " << a.size() << endl;
  Solution S;
  vector<int>res;
  res = S.plusOne(a);
//cout << "size " << res.size() << endl;

  while (!res.empty())
  {
    cout << "Result = " << res.back() << endl;
    res.pop_back();
  }
  return 0;
}