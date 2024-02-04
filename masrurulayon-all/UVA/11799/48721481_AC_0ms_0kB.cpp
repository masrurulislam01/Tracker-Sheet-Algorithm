#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> min_speed(T);

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        vector<int> speeds(n);

        for (int j = 0; j < n; j++) {
            cin >> speeds[j];
            //find max
            if (speeds[j] > min_speed[i]) {
                min_speed[i] = speeds[j];
            }
        }
    }

    //output
    for (int i = 0; i < T; i++) {
        cout << "Case " << i + 1 << ": " << min_speed[i] << endl;
    }

    return 0;
}
