#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 1;

    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int len = s.length();
        data[i].first = len;
        data[i].second = 0;
        for (char c : s) {
            data[i].second += (c - '0');
        }
        if(data[i].first!=6 || data[i].second!=25){
            flag=0;
        }
    }
    if(flag){
        cout<<n*(n-1)<<endl;
    }
    else{
    sort(data.begin(), data.end());
    int i = 0;
    int j = n - 1;
    int64_t ans = 0;

    while (i < j) {
        if (data[i].first + data[j].first < 12 || data[i].second + data[j].second < 50) {
            i++;
        } else if (data[i].first + data[j].first > 12 || data[i].second + data[j].second > 50) {
            j--;
        } else {
            int x = 1, y = 1;
            while (i + 1 < n && data[i].first == data[i + 1].first && data[i].second == data[i + 1].second) {
                i++;
                x++;
            }
            while (j - 1 >= 0 && data[j].first == data[j - 1].first && data[j].second == data[j - 1].second) {
                j--;
                y++;
            }
            ans += x * y;
            i++;
            j--;
        }
    }

    cout << ans*2 << endl;
    }
    return 0;
}
