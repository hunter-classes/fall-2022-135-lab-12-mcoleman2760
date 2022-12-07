#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


TEST_CASE("Make Vector"){
    std::vector<int> v1 = makeVector(7);
    std::vector <int> v1copy = {0,1,2,3,4,5,6};
    std::vector <int> v1false = {0,1,2,3,4,5,6,7};
    CHECK((v1 == v1copy) == true);
    CHECK((v1 == v1false) == false);



}

TEST_CASE("Good Vibes"){
    std::vector<int> v2 = {1,2,-1,3,4,-1,6};
    std::vector<int> vibes = goodVibes(v2);
    std::vector<int> v2vibes = {1,2,3,4,6};
    CHECK((vibes == v2vibes) == true);

}


TEST_CASE("Gogeta"){
    std::vector<int> a = {1,2,3};
    std::vector<int> b = {4,5};
    gogeta(a, b); 
    std::vector<int> v3test1 ={1,2,3,4,5};
    std::vector<int> v3test2 ={};
    std::vector<int> v3test3 ={1,2,3,4,5};

    CHECK((a == v3test1) == true);
    CHECK((b == v3test2) == true);
    CHECK((b == v3test3) == false);

}

TEST_CASE("Sum Pair Wise"){
    std::vector<int> first = {1,2,3};
    std::vector<int> second = {4,5,3};

    std::vector<int> vd = sumPairWise(first, second);
    std::vector <int> check = {5,7,6};
    std::vector <int> wrong = {1,2,3,4,5,3};

    CHECK((vd == check) == true);
    CHECK((vd == wrong) == false);

}

