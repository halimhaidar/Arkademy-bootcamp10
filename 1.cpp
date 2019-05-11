#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

char nm[20]="ABDUL HALIM HAIDAR";
string add ="Padang/West Sumatera/Indonesia";
char hb[2] [10]= {"Playing", "Blogging"};

cout<<"Name   : "<< nm << endl;
cout<<"Address: "<< add << endl;

for (int i = 0; i < 2; i++)  
        cout << "Hobbies: "<< hb[i] << endl;

return 0;
}
