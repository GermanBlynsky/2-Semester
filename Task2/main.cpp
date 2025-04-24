#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> V1 = { 1, 2, 2, 3, 4, 4, 4 };
    vector<int> V2 = { 2, 2, 2, 3, 5, 5 };

    multiset<int> ms1(V1.begin(), V1.end());
    multiset<int> ms2(V2.begin(), V2.end());

    multiset<int> result;

    auto it1 = ms1.begin();
    auto it2 = ms2.begin();

    while (it1 != ms1.end() || it2 != ms2.end()) {
        if (it1 == ms1.end()) {
            result.insert(*it2);
            ++it2;
        }
        else if (it2 == ms2.end()) {
            result.insert(*it1);
            ++it1;
        }
        else if (*it1 < *it2) {
            result.insert(*it1);
            ++it1;
        }
        else if (*it2 < *it1) {
            result.insert(*it2);
            ++it2;
        }
        else { // Случай когда *it1 == *it2
            int val = *it1;
            int count1 = ms1.count(val);
            int count2 = ms2.count(val);
            int max_count = max(count1, count2);
            for (int i = 0; i < max_count; ++i) {
                result.insert(val);
            }
            advance(it1, count1);
            advance(it2, count2);
        }
    }
    for (auto it = result.begin(); it != result.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
