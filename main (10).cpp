#include <iostream>

using namespace std;

int main()
{
int x,y,sum;
sum=0;
x=0;
y=10;
while (x<y){
  if (x%2==0)
    {sum=sum+x;
    }
 x=x+2;

}
cout<<sum;
return 0;
}
