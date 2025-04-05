#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums.at(0); //Set Small to first index
        int largest = nums.at(0);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < smallest) { // If smaller is bigger than current index then current index becomes the smallest number
                smallest = nums[i];
            }
            else if (nums[i] > largest) { //If largest is smaller than current index then current index becomes the smallest numer
                largest = nums[i];
            }
        }
            while (smallest != 0) {
                int temp = smallest;
                largest = largest % smallest;
                largest = temp;
            }
            return largest;
        }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution s;
    int result = s.findGCD(nums);
    cout << result << endl;
}