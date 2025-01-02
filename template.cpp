#include "./helper.cpp"



void test(int args, int expected) {
    Solution solution;
    cout << "args: " << args << "\n";
    auto result = solution.methodName(args);
    cout << "Result: " << result << "\n";
    if (result != expected) {
        cout << "Expected: " << expected << "\n";
    }
    cout << "\n";
}

int main() {
    test();
    return 0;
}
