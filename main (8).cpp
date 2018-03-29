#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<char, int> letter;
    letter.insert (pair <char , int> ('M',1000));
    letter.insert (pair <char , int> ('D', 500));
    letter.insert (pair <char , int> ('C', 100));
    letter.insert (pair <char , int> ('L', 50));
    letter.insert (pair <char , int> ('X', 10));
    letter.insert (pair <char , int> ('V', 5));
    letter.insert (pair <char , int> ('I', 1));
    cout<<"please enter how many letters : ";
    int numlet;
    cin>>numlet;
    cout<<"please enter number : ";
    string roman;
    cin>>roman;
    int sum=0;
    for (int i=0;i<numlet ;i++){
        if (letter[roman[i]]<letter[roman[i+1]]){
           sum=sum+(letter[roman[i+1]]-letter[roman[i]]);
                 i=i+1;

        }
        else {
            sum=sum+letter[roman[i]];
        }

    }
    cout<<sum;
    return 0;
}
