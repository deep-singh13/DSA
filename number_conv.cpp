#include <iostream>
using namespace std;

int main(){

    int n = 42;
    int bin;
    int pow = 1;
    int rem;
    while(n>0){

        rem =n%2;
        n = n/2;

        bin += rem* pow;
        pow *=10;
    }
    
    cout << "the binary number is " << bin << endl;

    return 0;


}