#include <iostream>
#include "mutq_elq.h"
#include "funcs.h"
using namespace std;

int main()
{
    
	int y[10][10], n, l=0, x[50],k,i,j,m;
	input(n, y);
    int a = 0, b = 0;
    cout << "Nermuceq a tivy: ";
    cin >> a;
    cout << "Nermuceq b tivy: ";
    cin >> b;
 
    func(a, b);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((y[i][j] * y[i][j]) > a && (y[i][j] * y[i][j]) < b) {
                func(x, l, y[i][j]);
                l++;
            }

    if (l > 0)
        output(l, x);
    else
        cout << "no" << endl;

}