#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];

    int t=0, b=r-1, l=0, ri=c-1;

    while(t<=b && l<=ri) {

        for(int i=l;i<=ri;i++) cout << a[t][i] << " ";
        t++;

        for(int i=t;i<=b;i++) cout << a[i][ri] << " ";
        ri--;

        for(int i=ri;i>=l;i--) cout << a[b][i] << " ";
        b--;

        for(int i=b;i>=t;i--) cout << a[i][l] << " ";
        l++;
    }
}
