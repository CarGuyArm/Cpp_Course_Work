#include <iostream>
using namespace std;
bool func(int& a, int& b) {
        //Tvyal entacragiry veradardznum e 1,
        //ete trvac a tivy mec e b tvic,hakarak depqum 0
    if (a > b)
        return 1;

    else
        return 0;
}
void func(int x[],int l,int k) {
        //Miachap zangvaci k-rd tarri arjeqy
        //havasarecnum e trvac tvin
    x[l] = k;
}
