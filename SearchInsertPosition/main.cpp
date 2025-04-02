#include <iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == target) { //Check if number match
                return i; //Return the index
            }
            else if (nums.at(i) > target) {
                return i;
            }
        }
        return nums.size(); //Returns if target is greater than the int
    }
};


int main() {
    Solution s;
    vector<int> nums = {1};
    int target = 0;
    cout << s.searchInsert(nums, target) << endl;

}