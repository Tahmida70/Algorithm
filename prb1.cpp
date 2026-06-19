#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

 int dp[100];
 int fibMemo(int n) {
    if (n <= 1)
        return n;
      if (dp [n] != -1)
        return dp[n];
      return dp[n] =  fibMemo(n - 1) +  fibMemo(n - 2);
 }

      int fibTab(int n){
     dp[0] = 0;
      if (n > 1)
        dp[1] = 1;
        for (int i = 2; i < n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
      for (int i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0 ; i <100 ; i++){
        dp[i] =  -1;
    }


    cout << "Recursive:";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;


        cout << "Memoization: ";
        for (int i = 0; i < 100; i++) {
        cout << fibMemo(i) << " ";
    }
      cout << endl;


    cout << "Tabulation: ";
    fibTab(n);
     cout << endl;

    return 0;
}











