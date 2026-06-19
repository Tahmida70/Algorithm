#include <iostream>
using namespace std;

int m[100][100];
int s[100][100];

void printPar(int i, int j) {
    if (i == j) {
        cout << "A" << i;
        return;
    }
    cout << "(";
    printPar(i, s[i][j]);
    printPar(s[i][j] + 1, j);
    cout << ")";
}

   int main() {
    int n;
    cin >> n;

    int p[100];
     for (int i = 0; i < n; i++)
        cin >> p[i];

        for (int i = 1; i < n; i++)
        m[i][i] = 0;

        for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {

        int j = i + len - 1;
         m[i][j] = 999999;
        for (int k = i; k < j; k++) {
         int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
          if (q < m[i][j]) {
          m[i][j] = q;
           s[i][j] = k;
                }
            }
        }
    }


    cout << "\nM Table:\n";
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i <= j) cout << m[i][j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

       cout << "\nS Table:\n";
       for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
        if (i < j) cout << s[i][j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }


    cout << "\nOptimal Parenthesization: ";
    printPar(1, n - 1);
    cout<<"Minimum cost ="<< m[1][n-1]<<endl;
    return 0;
}


