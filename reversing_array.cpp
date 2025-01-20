#include <iostream>
using namespace std;

void arrReverse(int arr[] , int size){

    short int start = 0;
    short int end  = size-1;

    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}


int main(){

int arr[7] = {4,2,7,8,1,2,5};
short int size = 7;

arrReverse(arr, size);
cout << "reversed array is ";

for(int i =0;i<size;i++){
    cout << arr[i];
}

cout << endl;
return 0;

}