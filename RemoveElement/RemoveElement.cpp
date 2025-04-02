/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
 */


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numVal = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                numVal++; //Gets the number of int Values
            }
        }

        for (int i = 0; i < nums.size() - 1; i++) {// Pushses all the target values to the back
            for (int j = i; j < nums.size()-i-1; j++) {
                if (nums[j] == val) {
                    nums[j] = nums[j+1];
                    nums[j+1] = val;
                }
            }
        }

        for (int i = 0; i < numVal; i++) { //Deletes the same number at the back
            nums.pop_back();
        }

        return nums.size();

    }

};

int main() {
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int target = 2;
    int k = s.removeElement(nums, target);;
    cout << k << endl;

}