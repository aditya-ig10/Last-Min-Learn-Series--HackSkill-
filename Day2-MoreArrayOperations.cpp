//Finding Running Sum of a 1D Array
#include <iostream>
using namespace std;

int main() {
    int nums[5] = {3, 4, 5, 6, 7};
    int runningSUm = 0;
    for ( int i = 0; i < 5; i++) {
        runningSUm += nums[i];
        cout << runningSUm << " ";
    }

    return 0;
}