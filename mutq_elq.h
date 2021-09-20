#include <iostream>
using namespace std;
template <typename mytype>
void input(int& n, mytype y[][10]) {
    cout << "Nermuceq zangvaci tarreri qanaky: ";
    do { cin >> n; } while (n < 2 || n>10);
    cout << "Nermuceq ekrchap zangvacy- \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> y[i][j];
    }
}
template <typename mytype>
void output(int &k, mytype *x) {
    cout << "Cragri ardyunqy \n";
    for (int i = 0; i < k; i++)
        cout << "\nx[" << i << "]= " << x[i] << endl;
}