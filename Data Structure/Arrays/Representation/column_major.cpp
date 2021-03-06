#include <iostream>
#include <vector>

// TODO: User inputs for matrix operations

using namespace std;


/* 
    Two Dimensional Array also known as a Matrix.
    This particular function is a 2x2 Matrix.
    It has 2 columns and 2 rows.
*/

int twoDimensionalArrayColumnMajorOrder(){
    vector<vector<int>> myArray = {{1,2,3}, {2,3,1}, {3,1,2}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"a["<<j<<"]["<<i<<"] = "<<myArray[j][i]<<"\n";
        }
        cout<<"\n"<<endl;
    }

    return 1;
}

int main() {
    printf("\nTwo Dimensional Array Column Major Order (Matrix): \n");
    twoDimensionalArrayColumnMajorOrder();
    return 0;
}