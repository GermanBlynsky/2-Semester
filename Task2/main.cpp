#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main() {
    vector<int> V1((istream_iterator<int>(cin)), istream_iterator<int>{});
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> V2((istream_iterator<int>(cin)), istream_iterator<int>{});
    if (V1.size() != V2.size()) {
        cerr << "Error: Vectors must be same size!" << endl;
        return 1;
    }
    transform(V2.begin(), V2.end(), V1.begin(), V2.begin(), multiplies<int>());
    cout << "Result: ";
    copy(V2.begin(), V2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
