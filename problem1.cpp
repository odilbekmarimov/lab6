#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float ta=0, v=0;
    cout<<"Enter the temperature in Fahrenheit between -58°F and 41°F: ";
    cin>>ta;
    while (ta<-58 || ta>41) {
        cout<<"Enter the temperature in Fahrenheit between -58°F and 41°F: ";
        cin>>ta;
    }
    cout<<"Enter the wind speed (>= 2) in miles per hour: ";
    cin>>v;
    while (v<2) {
        cout<<"Enter the wind speed (>= 2) in miles per hour: ";
        cin>>v;
    }
    cout<<"The wind chill index is "<<35.74+0.6215*ta-35.75*pow(v, 0.16)+0.4275*ta*pow(v, 0.16);
}