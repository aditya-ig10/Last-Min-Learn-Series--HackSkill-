#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, 7, 11, 15, 3, 6, 9};
    int target = 13;
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}

for (int i = 0; i < nums.size(); i++) {
    for ( int j = i +1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
            return {i,j};
        }
    }
}