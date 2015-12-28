class Solution 
{
public:
  bool canWinNim(int n) 
  {
    return (n % 4);
  }
};

//4: 4-0 Lost
//5: 1-4 Win
//6: 2-4 Win
//7: 3-4 Win
//8: 4-4-0 Lost
//9: 1-4-4 Win