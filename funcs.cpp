#include "funcs.h"
#include <vector>


std::vector<int> makeVector(int n){
  
  std::vector<int> v;  
  
  for(int i = 0; i < n ; i++){
     v.push_back(i);
  } 
 
 return v;
}
 
std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> v2;

    for (int i = 0; i < v.size(); i++) {
    if (v[i] > 0) {

    v2.push_back(v[i]);
 }

}

return v2;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }

    vegeta.clear();



}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){

std::vector<int> sums;

for (int i = 0; i < v1.size(); i++){
       int add = v1[i] + v2[i];
       sums.push_back(add);
    }


return sums;

}
