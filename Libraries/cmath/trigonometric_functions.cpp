#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double alfa;
    cin>>alfa; //input in radians
    
    cout<<"\n\n\tsin(alfa): "<<sin(alfa);    // sine
    cout<<"\n\n\tcos(alfa): "<<cos(alfa);    // cosine
    cout<<"\n\n\ttan(alfa): "<<tan(alfa);    // tangent
    cout<<"\n\n\tcsc(alfa): "<<1/sin(alfa); //  cosecant 
    cout<<"\n\n\tsec(alfa): "<<1/cos(alfa); //  secant
    cout<<"\n\n\tcot(alfa): "<<1/tan(alfa); //  cotangent

    return 0;
 }
