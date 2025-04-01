/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums); //Set a fixed size to the new array
        int sum = 0;
        for (int i = 0; i <nums.size(); i++) {
            sum += nums[i];
            result.at(i) = sum;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,1,2,10,1};
    vector<int> result = s.runningSum(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

}