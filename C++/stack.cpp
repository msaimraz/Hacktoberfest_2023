#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);  // Pushing an element
    s.push(2);
    s.pop();    // Popping an element

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
