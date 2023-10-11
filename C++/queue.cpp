#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);  // Enqueuing an element
    q.push(2);
    q.pop();    // Dequeuing an element

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
