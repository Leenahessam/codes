#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    int n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    int cups=a1+a2+a3;
    int medals=b1+b2+b3;


        while(cups>0){
            cups=cups-5;
            n=n-1;
        }
        while(medals>0){
            medals=medals-10;
            n=n-1;
        }

    if (n>=0){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
    return 0;
}
