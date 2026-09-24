#include <iostream>
using namespace std;

int main() {
    int A[] = {10, -5, 20, -3, 40, -8};
    int n = 6;

    cout << "[";

    for (int i = 0; i < n; i++) {
        if (A[i] >= 0) {
            cout << A[i];

            // Print comma except after the last positive number
            bool hasNext = false;
            for (int j = i + 1; j < n; j++) {
                if (A[j] >= 0) {
                    hasNext = true;
                    break;
                }
            }
            if (hasNext)
                cout << ", ";
        }
    }

    cout << "]";

    return 0;
}
