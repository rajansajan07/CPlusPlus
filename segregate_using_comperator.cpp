#include <iostream>
#include <vector>
#include <algorithm>

bool isOdd(int x) {
    return (x % 2 != 0);
}

void segregate(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        bool a_odd = isOdd(a);
        bool b_odd = isOdd(b);
        if (a_odd && !b_odd) {
            return true;
        }
        else if (!a_odd && b_odd) {
            return false;
        }
        else {
            return a < b;
        }
    });
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    segregate(v);
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
