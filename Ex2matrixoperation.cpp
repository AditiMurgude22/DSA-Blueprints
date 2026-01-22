#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    int A[20][20], B[20][20], C[20][20];

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    int choice;
    cout << "\nChoose operation:";
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Transpose of First Matrix";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2) {
                cout << "\nAddition Result:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                        cout << C[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Addition not possible!\n";
            }
            break;

        case 2:
            if (r1 == r2 && c1 == c2) {
                cout << "\nSubtraction Result:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        C[i][j] = A[i][j] - B[i][j];
                        cout << C[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Subtraction not possible!\n";
            }
            break;

        case 3:
            if (c1 == r2) {
                cout << "\nMultiplication Result:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++) {
                        C[i][j] = 0;
                        for (int k = 0; k < c1; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        cout << C[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Multiplication not possible!\n";
            }
            break;

        case 4:
            cout << "\nTranspose of First Matrix:\n";
            for (int i = 0; i < c1; i++) {
                for (int j = 0; j < r1; j++) {
                    cout << A[j][i] << " ";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
