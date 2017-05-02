#include <iostream>
#include <cstdlib>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

class Solution {
public:
    int myAtoi(string str) 
    {
      int result = 0;
      int sign = 1;
        int i = str.find_first_not_of(" ");
        if (str[i] == '+' || str[i] == '-')
          sign = (str[i++] == '-')? -1 : 1;//don't understand
        while (isdigit(str[i]) && i < str.size())
        {
          result = result * 10 + (str[i] - '0');
cout << "res = " << result << endl;
cout << "LONG_MAX: " << LONG_MAX << endl;
          if (result > LONG_MAX && sign == '1') return LONG_MAX;
          if (result < LONG_MIN && sign == '-1') return LONG_MIN;
          i++;
        }
      return result*sign;
    }
};


int main()
{
  Solution S;
  string x = "2147483648";
  int result = S.myAtoi(x);
  cout << "Result = " << result << endl;

}