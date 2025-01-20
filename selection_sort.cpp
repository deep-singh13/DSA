#include <iostream>
#include <vector>
using namespace std;


void selection_sort(vector<int> &arr, int n){

    for(int i =0;i<n-1;i++){
        int smallest_index = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[smallest_index]){
                smallest_index = j;
            }
        }
        swap(arr[i],arr[smallest_index]);
    }

}




int main(){

    vector<int> arr = {4,1,5,2,3};
    int size = 5;

    selection_sort(arr,size);

    cout << "sorted array is "<< endl;

    for(int val : arr){
        cout << val << " ";
    }

    cout << endl;

    return 0;


}