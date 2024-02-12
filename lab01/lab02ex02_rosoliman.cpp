#include <iostream>
using namespace std;

int main()
{
    int temp = 0;
    int val; 
    int max = 5;
    int m1[max][max];
    int m2[max][max];
    int sum[max][max];
    int prod[max][max];

    // populating matrix 1
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            cin >> m1[i][j];
            
        }
    }

    // populating matrix 2
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            cin >> m2[i][j];
        }
    }

    // sum of matrices
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }  

    // product of matrices
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < max; k++) {
                prod[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // for printing sum
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            if (temp == max - 1){
                cout << sum[i][j] << endl;
                temp = 0;
            }
            else {
                cout << sum[i][j] << ' ';
                temp ++;
            }
            
        }
    }
    
    // for printing product
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            if (temp == max - 1){
                cout << prod[i][j] << endl;
                temp = 0;
            }
            else {
                cout << prod[i][j] << ' ';
                temp ++;
            }
        }
    }
}