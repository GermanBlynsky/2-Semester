#include <iostream>
#include <vector>
#include <algorithm>  
#include <functional> 

int main() {
    int n;
    std::cout << "Введите размер векторов V1 и V2: ";
    std::cin >> n;
    std::vector<int> V1(n);
    std::vector<int> V2(n);
    std::cout << "Введите элементы вектора V1 (" << n << " чисел через пробел): ";
    std::copy_n(std::istream_iterator<int>(std::cin), n, V1.begin());
    std::copy_n(std::istream_iterator<int>(std::cin), n, V2.begin());
    if (V1.size() != V2.size()) {
        std::cerr << "Ошибка: векторы должны быть одинаковой длины!" << std::endl;
        return 1;
    }
    std::transform(V2.begin(), V2.end(), V1.begin(), V2.begin(), std::multiplies<int>());
    std::copy(V2.begin(), V2.end(), std::ostream_iterator<int>(std::cout, " "));
}
