#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        char I = 'I';
//cout << "char I = " << I << endl;
        char V = 'V';
        char X = 'X';
        char L = 'L';
        char C = 'C';
        char D = 'D';
        char M = 'M';

        for (int i = 0; i < s.length(); ++i)
        {
          if (s[i] == I)
            result = result + 1;
          else if (s[i] == V)
          { 
            if (s[i-1] == I)//5
              result = result - 1 + 4;
            else 
              result = result + 5;
          }
          else if (s[i] == X)//10
          { 
            if (s[i-1] == I)
              result = result - 1 + 9;
            else 
              result = result + 10;
          }
          else if (s[i] == L)//50
          { 
            if (s[i-1] == X)
              result = result - 10 + 40;
            else 
              result = result + 50;
          }
          else if (s[i] == C)//100
          { 
            if (s[i-1] == X)
              result = result - 10 + 90;
            else 
              result = result + 100;
          }
          else if (s[i] == D)//500
          { 
            if (s[i-1] == C)
              result = result - 100 + 400;
            else 
              result = result + 500;
          }
          else if (s[i] == M)//1000
          { 
            if (s[i-1] == C)
              result = result - 100 + 900;
            else 
              result = result + 1000;
          }
        }
        return result;
    }
};

int main()
{
  int result = 0;
  Solution S;
  string str = "MCMXCVI";
  result = S.romanToInt(str);
  cout << "Result = " << result << endl;
}