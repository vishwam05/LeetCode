#include <iostream>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int prime = 0;
        int counter = 2;
        if (n == 0 || n == 1 || n == 2) {
            return prime; //Return 0 is n is 1 or 0;
        }
        else {
            for (int i = 2; i < n; i++) { //Iterate throught the numbers less than n
                int j = i - 1; //J equals to -1 whatever value "i" is;
                counter = 2;
                while (j != 1) { //Iterate until j dosen't euqal to one
                    if (i % j != 0) // If the remainder isn't 0, then I isn't divisble by 0
                        counter++; //Count how many times we try different values of j
                    j--; // Minus j so that we try to divide until j == 1 because anything divide by gives 0
                    if (counter == i) { // If the number of tries equals to i that means there is no prime number
                        prime++;
                    }
                }
            }
            return prime+1;
        }
    }

};

int main() {

}