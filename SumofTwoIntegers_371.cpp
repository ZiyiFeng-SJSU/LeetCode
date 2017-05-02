class Solution {
public:
    int getSum(int a, int b){
        int loop = 0;
        int result = 0;

        int caseNO = 0;
        if (a >= 0 && b >= 0)
            caseNO = 1; 
        else if (a < 0 && b >= 0)
            caseNO = 2;
        else if (a >= 0 && b < 0)
            caseNO = 3;
        else
            caseNO = 4;
            
        switch ( caseNO ){
        case 1:            // Note the colon, not a semicolon
        if (a > b) {
            result = a;
            loop = b;
        }
        else{
            result = b;
            loop = a;
        }
        while (loop){
            result++;
            loop--;
        }
        break;
        //a < 0 & b >= 0
        case 2:
        int counter = 0;
        result = b;
        while (a < 0)
        {
            counter++;
            a++;
        }
        if (counter < b)
        {
            while (counter)
            {
                result--;
                counter--;
            }
        }
        break;
        case 3:            // Note the colon, not a semicolon
        break;
        case 4:            // Note the colon, not a semicolon
        break;
        default:            // Note the colon, not a semicolon
        cout<<"Error, bad input, quitting\n";
        break;
        }
        return result;
    }
};