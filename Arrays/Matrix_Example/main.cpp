#include <iostream>
#include <vector>

using namespace std;

int main(){

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8 , 9}};

    cout << "Array-based Matrix:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Vector-based Matrix:" << endl;
    vector<vector<int>> matrix2 = {{1, 2, 3}, {4, 5, 6}, {7, 8 , 9}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //cout << matrix2[i][j] << " ";
            cout << matrix2.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}