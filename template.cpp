#define ARR_GRID
#include "./helper.cpp"

template<typename _Tp, typename _Container = std::vector<_Tp>>
using min_heap = priority_queue<_Tp, _Container, std::greater<_Tp>>;



void test(int args, int expected) {
    Solution solution;
    cout << "args: " << args << "\n";
    auto result = solution.methodName(args);
    if (result != expected) {
        cout << "\e[31mResult: " << result << "\e[m\n";
        cout << "Expect: " << expected << "\n";
    } else {
        cout << "Result: " << result << "\n";
    }
    cout << "\n";
}

int main() {
    test();
    return 0;
}
