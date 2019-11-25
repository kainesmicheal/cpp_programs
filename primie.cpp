#include<iostream>

using namespace std;

main() {
    int i,j;
    for(i=2;i<100;i++) {
        bool prime=true;
        for(j=2;j<i;j++) {
            if(i%j == 0) {
                prime=false;
                break;
            }
        }
        if(prime) {
        cout << i << " is a primeNumber." << endl;
        }
        
    }
}

