#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int maxSum = a[0];   
    int currSum = a[0];  
    
    for(int i = 1; i < n; i++) {

       
        currSum = max(a[i], currSum + a[i]);

        
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;
}