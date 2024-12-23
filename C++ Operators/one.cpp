#include <iostream>
using namespace std;

int main() {
    int i = 1;
    start:
        if (i <= 5) {
            cout << "Iteration " << i << endl;
            i++;
            goto start; // Jump back to the label
        }
    return 0;
}
