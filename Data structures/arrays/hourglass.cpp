#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; ++i)
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
  int max = INT_MIN, tmp;

  REP(i, 0, arr.size() - 2) {

    REP(k, 0, arr.size() - 2) {
      tmp = 0;
      tmp = tmp + arr[i][k] + arr[i][k + 1] + arr[i][k + 2];
      tmp += arr[i + 1][k + 1];
      tmp = tmp + arr[i + 2][k] + arr[i + 2][k + 1] + arr[i + 2][k + 2];
      if (tmp > max)
        max = tmp;
    }

    }

    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; ++i)
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
  int max = INT_MIN, tmp;

  REP(i, 0, arr.size() - 2) {

    REP(k, 0, arr.size() - 2) {
      tmp = 0;
      tmp = tmp + arr[i][k] + arr[i][k + 1] + arr[i][k + 2];
      tmp += arr[i + 1][k + 1];
      tmp = tmp + arr[i + 2][k] + arr[i + 2][k + 1] + arr[i + 2][k + 2];
      if (tmp > max)
        max = tmp;
    }

    }

    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
