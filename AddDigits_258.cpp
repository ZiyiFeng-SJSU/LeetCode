#include <iostream>
using namespace std;

class Solution 
{
public:
    int addDigits(int num) 
    {
        int temp = num;
        int result = 0;
        while (temp >= 10)
        {
          result += temp % 10;
          temp = (temp - temp % 10) / 10;
        }
        result += temp;
        cout << "temp = " << result << endl;
        if (result < 10)
          return result;
        if (result >= 10)
          addDigits (result);
    }
};

int main()
{
  Solution a;
  int x = a.addDigits(29);
  cout << "Result = " << x << endl;
  x = a.addDigits(28);
  cout << "Result = " << x << endl;
}