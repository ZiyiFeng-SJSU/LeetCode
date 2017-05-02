#include <string>
class Solution {
public:
    string reverseString(string s) {
    string buf;
    //buf.length() = s.length();
    int x = s.length();
    while (x)
      {
        buf = buf + s[x - 1];
        x--;
      }
      cout << "buf = " << buf << endl;
      return buf;
    }
};