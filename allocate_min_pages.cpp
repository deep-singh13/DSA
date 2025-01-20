#include <iostream>
#include <vector>

using namespace std;

bool is_valid(vector<int> &arr,int n, int m, int mid){

    int stu = 1;
    int pages = 0;

    for(int i =0; i<n;i++){
        if(arr[i] > mid){
            return false;
        }
        if(arr[i]+pages <= mid){
            pages+=arr[i];
        }
        else{
            stu++;
            pages = arr[i];
            if(stu > m){
                return false;
            }
        }
    }
    return true;

    
}


int allocate_books(vector<int> &arr , int n, int m){

     int end = 0;
     for(int i =0;i<n;i++){
        end+=arr[i];

     }

    int start = 0;
    int ans =-1;
    
    while(start <= end){
        int mid = start + (end - start)/2;    
        if(is_valid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }

        else{
            start = mid+1;
        }
    }

    return ans; 

}



int main(){

    vector<int> arr = {2,1,3,4};

    int n =4, m=2;  // n is the number of books and m is the number of students
    
    cout << allocate_books(arr,n,m) << endl;


    return 0;
}