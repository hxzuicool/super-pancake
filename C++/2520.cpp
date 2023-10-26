#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>

using namespace std;



int countDigits(int num) {

    int result = 0;

    int tmp1 = num;
    while (tmp1)
    {

        if (num % (tmp1 % 10) == 0)
        {
            result++;
        }
        
        tmp1 = (tmp1 - (tmp1 % 10)) / 10;
    }

    
    return result;
}

int main() {


    int result = countDigits(1248); 

    printf("%d\n", result);
    return 0;
}
