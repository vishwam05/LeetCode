#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int i = 0; i < hours.size(); i++) {
            if (hours.at(i) >= target) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> hours = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 3;
    Solution s;
    cout << s.numberOfEmployeesWhoMetTarget(hours, target) << endl;
}