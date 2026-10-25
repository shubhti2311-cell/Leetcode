#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0,n;
        for(int i=0;i<nums.size();i++){
          a=  a^nums[i];
        }
        return a;
    }
};
int main() {
    
    return 0;
}