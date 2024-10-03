#include <iostream>
using namespace std;

int main () {
    int n;
    int d1, d2, d3, d4;
    cin>>n;
    while (n>9999 || n<1000) {
        cout<<"error";
        cin>>n;
    }
    d1=(n/1000);
    d2=(n/100) % 10;
    d3=(n/10)%10;
    d4=n%10;


    d1=(d1+7)%10;
    d2=(d2+7)%10;
    d3=(d3+7)%10;
    d4=(d4+7)%10;

    int container=0;

    container=d1;
    d1=d3;
    d3=container;

    container=d2;
    d2=d4;
    d4=container;
    cout<<d1*1000+d2*100+d3*10+d4<<endl;
    int newn=d1*1000+d2*100+d3*10+d4;

    d1=(newn/1000);
    d2=(newn/100) % 10;
    d3=(newn/10)%10;
    d4=newn%10;

    d1=(d1+3)%10;
    d2=(d2+3)%10;
    d3=(d3+3)%10;
    d4=(d4+3)%10;

    container=d1;
    d1=d3;
    d3=container;

    container=d2;
    d2=d4;
    d4=container;
    cout<<d1*1000+d2*100+d3*10+d4;

}