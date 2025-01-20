#include <iostream>
using namespace std;

int factOfNum (int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
    fact *=i;
    }
    return fact;
}

int main(){

    int n =8;
    int r =2;

    int ncr  = factOfNum(n) / (factOfNum(r) * factOfNum(n-r));

    cout << ncr <<endl;
    return 0;
    
}

