#include <iostream>
using namespace std;


bool powOfTwo(int n){

    int pow = 2;

    while (pow<=n){
        if(pow ==n){
            return true;
        }
        pow *=2;
    }
    return false;

}


int main(){

    cout << "the number is" << powOfTwo(34) << endl;

    return 0;

}