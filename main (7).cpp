#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x%2==0){
        x=x+1;
    }
    for (int i=1;i<=6;i++){
        cout<<x<<endl;
        x=x+2;
    }
    return 0;
}
