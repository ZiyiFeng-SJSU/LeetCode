#include <cstdlib>
#include <iostream>
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
       
        int top = n;
        int buttom = 0;
        
        int m = (top - buttom) / 2; //m is the middle numder
        cout << "m = " << m << endl;
        
        while (true)
        {
            if (guess(m) == 0)
                break;
            else if (guess(m) == -1) // my guess is too high
            {
                top = m;
                m = (top - buttom) / 2; //m is the middle numder
                cout << "m was too high, now m = " << m << endl;
            }
            else if (guess(m) == 1)//my guess is too low
            {
                cout << "top = " << top << endl;
                cout << "buttom = " << buttom << endl;
                cout << "m = " << m << endl;
                buttom = m;
                m = floor((top - buttom) / 2 + buttom);
                cout << "m was too low, now m = " << m << endl;
            }
        }
        return (m);
    }
};
