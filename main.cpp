#include "source.h"

int main() {
    startDefaults();
    double x;
    cout << "Enter x value:   ";
    cin >> x; cout << endl;
    if (!freopen("input.txt", "r", stdin))
        exit(2);
    int t1 = -2, t2 = -2;
    while ((cin >> t1)) {
        if (!(cin >> t2))//! если убрать inside скобки, то он кукухой едет
            exit(1);
        push_last(make_pair(t1, t2));
    }
    printL();
    cout << "\nValue at x == " << x << endl << valueat(x);
    return 0;
}
