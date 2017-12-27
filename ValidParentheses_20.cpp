#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack <char>store;
        for (int i = 0; i <  s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                store.push(s[i]);
            else if (s[i] == ')')
            {
                if (store.top() == '(')
                    store.pop();
                else 
                    return false;
            }
            else if (s[i] == ']')
            {
                if (store.top() == '[')
                    store.pop();
                else 
                    return false;
            }
            else if (s[i] == '}')
            {
                if (store.top() == '{')
                    store.pop();
                else 
                    return false;
            }
        }
        if (store.empty()) 
            return true;
        else 
            return false;
    }
};

int main()
{
    Solution s;
    if (s.isValid("]"))
      cout << "True" << endl;
    else
      cout << "False" << endl;
}