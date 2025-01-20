#include <iostream>
using namespace std;
#include <vector>

int max_vol(vector<int> height){


    int max_vol = 0;

    for(int i =0;i<height.size();i++){
        for(int j =i+1;j<height.size();j++){
            int w =j-i;
            int ht = min(height[i],height[j]);
            int currwater = w * ht;

            max_vol = max(max_vol,currwater);
                    
        }
    }
    return max_vol;
}







int main(){
    
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "ans " << max_vol(height) << endl; 
    
    
    
    
    
    return 0;

}