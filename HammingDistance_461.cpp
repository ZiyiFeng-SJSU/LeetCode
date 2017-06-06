#include <iostream>
#include <bitset>
using namespace std;

class Solution
{
public:
  int hammingDistance(int x, int y)
  {
    bitset<32> X(x);
    bitset<32> Y(y);

    int counter = 0;
    // int maxSize = ((X.size() > Y.size()) ? X.size() : Y.size());
    for (int i = 0; i < 32; i++)
    {
      if (X[i] != Y[i])
      {
        counter++;
        X >> 2;
        Y >> 2;
      }
    }
    return counter;
  }
};
int main()
{
  Solution S;
  cout << S.hammingDistance(1, 4);
}