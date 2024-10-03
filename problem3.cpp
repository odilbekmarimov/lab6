#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a0=0, a1=1;
    cout<<a0<<", ";
    int next=0;
    for (int i=1; i<=n; i++) {
        cout<<a1;
        if (i<n) {
            cout<<", ";
        }
        next=a0+a1;
        a0=a1;
        a1=next;

    }

}
