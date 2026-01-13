#include <iostream>
using namespace std;

int main() {
    int n, x, i;
    int sum = 0;
    int max = 0;
    
    cin >> n;

    for (i=1; i<=n; i++) {
        cin >> x;
    
        sum+=x;
        
       if (x > max) {
            max = x; }
    } 
    cout << sum << endl;
    cout << max << endl;
    
    return 0;
}
// ขอ 0.5 ก็พอครับ
