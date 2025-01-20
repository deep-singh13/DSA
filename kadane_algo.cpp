#include <iostream>
using namespace std;

int maxSubarray(int nums[], int size){

    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i<size;i++){
        curSum +=nums[i];
        maxSum = max(maxSum,curSum);
        if (curSum < 0){
            curSum = 0;
        }
    }
    return maxSum;

}




int main() {
    int size = 7;
    int nums[7] = {3,-4,5,4,-1,7,-8};
    
    cout << maxSubarray(nums,size) << endl;


}