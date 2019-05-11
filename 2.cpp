#include <iostream>
#include <string>
using namespace std;

int main(){
    
string usrnm, eml;

usr:
cout<<"Enter Username : ";

cin>>usrnm;
if (usrnm.length()<=8){
    cout<<"USERNAME VALID"<< endl;}
else {
    cout<<"USERNAME TIDAK VALID!!"<< endl;
    cout<<"======COBA LAGI!======"<< endl;
    goto usr;}
eml:
cout<<"Enter e-Mail   : ";
cin>>eml;
if (eml.length()>=4){
    cout<<"E-MAIL VALID"<<endl;}
else {
    
    cout<<"E-MAIL TIDAK VALID!!"<< endl;
    cout<<"=====COBA LAGI!====="<< endl;
    goto eml;}

cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
cout<<"Your Username  : "<<usrnm<<endl;
cout<<"Your e-Mail    : "<<eml<<"@mail.com"<<endl;






return 0;
}
