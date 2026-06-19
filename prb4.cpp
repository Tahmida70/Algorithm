#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    int g[10][10];
    int visited[10] = {0};

        for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];

        int start;
       cin >> start;

       queue<int> q;

      q.push(start);
      visited[start] = 1;

       while (!q.empty()) {
        int x = q.front();
        q.pop();

        cout << x << " ";

        for (int i = 0; i < n; i++) {
            if (g[x][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
}

