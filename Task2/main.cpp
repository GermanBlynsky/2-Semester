#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v1 = { 1, 2, 2, 3, 4, 4, 4, 5 };
    vector<int> v2 = { 2, 2, 2, 3, 5, 5 }, dest;
    std::set_union(v1.cbegin(), v1.cend(),
    v2.cbegin(), v2.cend(),
    std::back_inserter(dest));
    std::copy(dest.begin(), dest.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
