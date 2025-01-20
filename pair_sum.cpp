#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> nums,int target){

    int start = 0;
    int end= nums.size()-1;
    vector<int> ans;
    while (start<end){
        int pairsum = nums[start] + nums[end];
        if(pairsum== target){
            ans.push_back(nums[start]);
            ans.push_back(nums[end]);
            break;
        }

        else if (pairsum< target){
            start++;
        }

        else{
            end--;
        }
    }
    return ans;

}

int main(){
    vector<int> question = {2,7,11,15};
    int target = 13;


    vector<int>ans = pair_sum(question,target);

    cout << "the pair is " << ans[0] << ", " << ans[1] << endl;

    return 0;

}