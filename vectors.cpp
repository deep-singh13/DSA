#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    vector<int> vec;

    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(1);
    
    cout<< vec.size() <<endl;
    cout<< vec.capacity() <<endl;


return 0;    

}