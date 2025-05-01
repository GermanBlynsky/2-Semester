#include <iostream>
#include <vector>
#include <algorithm>  
#include <functional> 

int main() {
    std::vector<int> V1 = { 1, 2, 3, 4, 5 };
    std::vector<int> V2 = { 10, 20, 30, 40, 50 };
    std::transform(V2.begin(), V2.end(), V1.begin(), V2.begin(), std::multiplies<int>());
    for (int num : V2) {
        std::cout << num << " ";
    }
    return 0;
}