// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef vector<int> vi;
typedef vector<vi> vvi;
 

void algorithm(int &x){
    x = x*2;
}
void addtwo(int &x){
    x += 2;
}

int main(){
    int x = 10;        //int variable   

    algorithm(x);       //pased that variable to a function
    addtwo(x);

    cout << x << endl; //print x
}