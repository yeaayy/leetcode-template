#include <assert.h>

#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

#ifdef ARR_GRID
template<typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<vector<T>> &v) {
    out << "[";
    for(size_t i = 0; i < v.size(); i++) {
        if(i) out << ",\n ";
        out << v[i];
    }
    out << "]";
    return out;
}
#endif

template<typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v) {
    out << "[";
    for(size_t i = 0; i < v.size(); i++) {
        if(i) out << ", ";
        out << v[i];
    }
    out << "]";
    return out;
}

template<typename K, typename V>
std::ostream &operator<<(std::ostream &out, const std::map<K, V> &m) {
    out << "{";
    size_t i = 0;
    for(auto item : m) {
        if(i) out << ", ";
        out << item.first << " => " << item.second;
        i++;
    }
    out << "}";
    return out;
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const std::set<T> &m) {
    out << "(";
    size_t i = 0;
    for(auto item : m) {
        if(i) out << ", ";
        out << item;
        i++;
    }
    out << ")";
    return out;
}

template<typename A, typename B>
std::ostream &operator<<(std::ostream& out, const std::pair<A, B>& p) {
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}

template<typename T>
std::stringstream print(T *arr, size_t len) {
    std::stringstream out;
    out << "[";
    for(size_t i = 0; i < len; i++) {
        if(i) out << ", ";
        out << arr[i];
    }
    out << "]";
    return out;
}

std::ostream &operator<<(std::ostream &out, const std::stringstream &str) {
    return out << str.rdbuf();
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
