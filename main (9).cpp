#include <iostream>
#include <string>
using namespace std;

int main()
{
    float x,y,bmr,age,chclt;
    string z;
    cout<<"Please , enter your height in inches : "<<endl;
    cin>>x;
    cout<<"Please , enter your weight in pounds : "<<endl;
    cin>>y;
    cout<<"Please , enter your age in years : "<<endl;
    cin>>age;
    cout<<"M/F : "<<endl;
    cin>>z;
    if (z=="M"){
        bmr=66+(6.3*y)+(12.9*x)-(6.8*age);
    }
    if (z=="F") {
        bmr=655+(4.3*y)+(4.7*x)-(4.7*age);
    }
    chclt=bmr/230;
    cout<< "Number of chocolate bars should be consumed : "<<chclt<<" chocolate bars"<<endl;
    return 0;
}
