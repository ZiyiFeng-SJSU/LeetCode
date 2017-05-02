#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> result;
        unsigned long long sum = digits.back();
        unsigned long long temp,counter = 0;
        digits.pop_back();
        
        while (!digits.empty())
        {
          counter++;
          temp = digits.back();

          for (unsigned long long i = 0; i < counter; i++)
            temp *= 10;
          sum += temp;
          digits.pop_back();
        }
        digits.pop_back();
        
cout << "Sum = " << sum << endl;
        sum = sum + 1;

        while (sum > 9)
        {
          unsigned long long rem = sum % 10;
  //        cout << "Reminder = " << rem << endl;
          result.push_back(rem);
          sum = (sum - rem) / 10;

//          cout << "size " << result.size() << endl;
        }
        result.push_back(sum);
//        cout << "size " << result.size() << endl;

        std::vector<int> final;
        while (!result.empty())
        {
          final.push_back(result.back());
          result.pop_back();
        }
        return final;
    }
};


int main()
{
  vector<int> a = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};
  cout << "Size = " << a.size() << endl;
  Solution S;
  vector<int>res;
  res = S.plusOne(a);
  cout << "size " << res.size() << endl;

  while (!res.empty())
  {
    cout << "Result = " << res.back() << endl;
    res.pop_back();
  }
  return 0;
}