#include <vector>
#include <iostream>

using std::vector;

vector<int> extendedEuclidus(int a, int b){
    vector<int> result;
    int q;
    int r = -1;
    int s0 = 1, s1 = 0, s2;
    int t0 = 0, t1 = 1, t2;
    while (r != 0){
        q = a / b;
        r = a - q * b;
        s2 = s0 - q * s1;
        t2 = t0 - q * t1;
        a = b;
        b = r;

        s0 = s1;
        s1 = s2;

        t0 = t1;
        t1 = t2;
    }

    result.push_back(a);
    result.push_back(s1);
    result.push_back(t1);

    return result;
}

int main(){
    int a = 46;
    int b = 240;
    for (int i : extendedEuclidus(a, b)){
        std::cout << i << "  ";
    }
    return 0;
}

