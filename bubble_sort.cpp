#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector<int> &arr, int n){

    for(int i=0;i<n-1;i++){
        for(int j =0; j<n-i-1;j++){
            if(arr[j] > arr[j+1] ){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(){

    vector<int> arr = {4,1,5,2,3};
    int size = 5;
    bubble_sort(arr,size);

    cout << "sorted array is" << endl;

    for( int val : arr){
        cout << " " << val;
    }

    cout << endl;

    





    return 0;
}
