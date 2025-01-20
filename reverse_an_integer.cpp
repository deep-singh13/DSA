#include <iostream>
using namespace std;


int reverseInt(int n){

    int reversed_int = 0 ;
    int temp ;

    while (n>0){
        temp = n%10;
        reversed_int = reversed_int *10 + temp;
        n = n/10;

    }

    return reversed_int;



}



int main(){

    cout << "the reversed number is " << reverseInt(125) << endl;


}