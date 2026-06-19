#include <iostream>
#include<algorithm>
using namespace std;

 int main() {
    string a, b;
    cin >> a >> b;

    int m = a.size();
    int n = b.size();

    int dp[100][100];


    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {

            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }


    cout << "DP Table:";
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

   cout << "LCS Length = " << dp[m][n] << endl;

   int i = m, j = n;
    string lcs = "  ";

    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            lcs += a[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    reverse(lcs.begin(), lcs.end());

    cout << "LCS = " << lcs << endl;

    return 0;
}
