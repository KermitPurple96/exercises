#include <iostream> 

using namespace std; 

int main() 
{
    int num = 0;

    cout << "Say a number: ";
    cin >> num;
    int ast;
    int k;
    int mid = num / 2;

    for (int i = mid; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout << " ";
        }
        ast = num - (i * 2);
        for (k = 1; k <= ast; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j <= (i+1); j++) {
            cout << " ";
        }
        ast = num - (i*2) - 2;

        for (k = (ast - 1); k >= 0; k--) {
            if (k == num) {
                continue; 
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0; 
}
