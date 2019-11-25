#include<iostream>

using namespace std;

int max(int a, int b) {
    if (a>0 && b>0) {
        if (a>b) {
            return a;
        }
        else {
            return b;
        }
    }
}

main() {
    int Result = max(10,5);
    cout << "Maximum_Number is : " << Result ;
}

