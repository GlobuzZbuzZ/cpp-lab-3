#include <iostream>
//#include <cmath>

using namespace std;

void answer(int massm[], int n, int s, int snow, int i, int &mind){
    if (i==n){
        int delta;
        delta = abs((s-snow)-snow);
        if (delta < mind){
            mind=delta;
        }
    return;
    }
    answer(massm, n, s, snow + massm[i], i+1, mind);
    answer(massm, n, s, snow, i+1, mind);
}

int main() {
    int n;
    cin >> n;
    int massm[32];
    int summa = 0;
    for (int i = 0; i < n; ++i) {
        cin >> massm[i];
        summa += massm[i];
    }

    int mind = summa;
    answer(massm, n, summa, 0, 0, mind);

    cout << mind;

    return 0;
}