#include<iostream>

using namespace std;


int ** get_matrix(int name,int rows,int cols) {
    int i,j;
    int * *temp = new int * [rows];
    for (i=0;i<rows;i++) {
        temp[i] = new int[cols];
        cout << temp[i] << endl;
        for (j=0;j<cols;j++) {
            cout << temp[i][j+1] << endl;
            //cout << temp[i][j] << endl;
            cin >> temp[i][j];
        }
    }
    return temp;
}

void print_matrix(int name,int** mat,int rows, int cols) {
    cout << "the matrix is " << name << " : " << endl;
    int i,j;
    for (i=0;i<rows;i++) {
        cout << "\t";
        for (j=0;j<cols;j++) {
            cout << mat[i][j];
            cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    int** mat = get_matrix(1,2,2);
    print_matrix(1,mat,2,2);
}




