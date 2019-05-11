#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int i;
char nm[20]="ABDUL HALIM HAIDAR";
string add ="Padang/West Sumatera/Indonesia";
char hb[2] [10]= {"Playing", "Blogging"};
bool mar=false;
string skill[3] = {"Pascal(70)","C++(60)","FoxPro(50)"}; 

cout<<"Name   : "<< nm << endl;
cout<<"Address: "<< add << endl;

for (i = 0; i < 2; i++)  
        cout << "Hobbies: "<< hb[i] << endl;

cout<<"Married: "<< mar << endl;

for (i=0; i < 3; i++)
        cout<< "Skill  : "<< skill[i] << endl;
return 0;
}
