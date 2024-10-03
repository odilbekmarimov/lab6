#include <iostream>
using namespace std;
int main () {
    int inNum, small, current;
    cin>>inNum;
    cin>>current;
    small=current;
    for (int i=1; i<inNum; i++) {
        cin>>current;
        if (current<small) {
            small=current;
        }

    }
    cout<<small;
}
