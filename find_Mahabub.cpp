#include<bits\stdc++.h>
using namespace std;
int main ( ) {
    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    int flag = 0;
    while (ss >> word)
    {
   if(word == "Mahabub"){
    flag =1;
   }
    }
    if(flag ==1){
        cout << "YES\n";
    }
    else  cout << "NO\n";
    return 0;
}