#include <iostream>
#include <vector>
#include "funcs.h"


int main(){

// Task A
std::cout << "------------------" << std::endl;
std::cout << "Task A" << std::endl;
std::cout << "------------------" << std::endl;
std::vector<int> myVector = makeVector(7);
    for (int i = 0; i < 7; i++){
        std::cout << myVector[i] << std::endl;
    } 
// Task B
std::cout << "------------------" << std::endl;
std::cout << "Task B" << std::endl;
std::cout << "------------------" << std::endl;
std::vector<int> b{1,2,-1,3,4,-1,6};

std::vector<int> b2 = goodVibes(b);

 for (int i = 0; i < b2.size(); i++){
        std::cout << b2[i] << std::endl;
    } 

// Task C
std::cout << "------------------" << std::endl;
std::cout << "Task C" << std::endl;
std::cout << "------------------" << std::endl;
std::vector<int> v1{1,2,3};
std::vector<int> v2{4,5};
gogeta(v1, v2); 

// v1
for (int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << std::endl;
    }

    std::cout << "Vector 2" << std::endl;
// v2

for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << std::endl;
    } 
    std::cout << "Vector 2 is empty" << std::endl;

// Task D
std::cout << "------------------" << std::endl;
std::cout << "Task D" << std::endl;
std::cout << "------------------" << std::endl;



std::vector<int> first{1,2,3};
std::vector<int> second{4,5,3};

std::vector<int> vd = sumPairWise(first, second);

 for (int i = 0; i < vd.size(); i++){
        std::cout << vd[i] << std::endl;
    } 

}
