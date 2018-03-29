#include <iostream>
#include <string>
using namespace std;

int main()
{ int m;
  cout<<"ahlan ya user ya habibi "<<endl;
  cout<<"please enter [1] ciphering , [2]  deciphering or [3] end : ";
  cin>>m;
  if (m==1){
  char x[26]={'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  string y[26]={"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001"};
  char a[10];
  string b,c;
  int l;
  cout<<"Please , enter number of characters you will enter (WITHOUT SPACES) : ";
  cin>>l;
  cout<<"Now please , enter a sentence (WITHOUT SPACES AND CAPITAL LETTERS) : ";
  cin>>a;
    for(int i=0;i<l;i++)
        {
      for (int h=0;h<26;h++)
       {
        if(a[i]==x[h])
        {
         b=y[h];
        }}

      for(int t=0;t<5;t++){
        if (b[t]=='0'){
            cout<<'a';
        }
        else if (b[t]=='1'){
            cout<<'b';
        }
        if (t==4){
            cout<<' ';
        }
      }

        }

    }
    else if (m==2){
    string y[26]={"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001"};
    char x[26]={'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    while (true){
    char a[5];
    cout<<" please , enter 5 characters only :";
    cin>>a;
    if (a[0]=='a'&&a[1]=='a'&&a[2]=='a'&&a[3]=='a'&&a[4]=='a'){
        cout<<"A"<<endl;
        continue;
    }
    char listt[5];
    string b;
    for (int i=0;i<5;i++){
       listt[i]={a[i]};
        if (i==4){
            for (int h=0;h<5;h++){
                if (listt[h]=='a'){
                    listt[h]='0';
                }
                else if (listt[h]=='b')
                {
                    listt[h]='1';
                }

                }
             int g;
             for (int p=0;p<26;p++){
                b=y[p];
                if (b[0]==listt[0]&&b[1]==listt[1]&&b[2]==listt[2]&&b[3]==listt[3]&&b[4]==listt[4]){
                g=p;
                break;
                }

                else {
                continue;
                     }}

                    cout<<x[g]<<endl;


             }
             }}}
        else if(m==3){
            cout<<"Thanks for using this program ";
        }}
