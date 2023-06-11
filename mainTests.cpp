#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    system("cls");
bool atbilde;
int atb;
do{
    cout<<"Kuri no siem ir derigi veselu skaitlu datu tipi programma C++?\n\n1) int \n2) float\n3) short\n4) long\n\nAtbilde: ";
    cin>>atb;
    if(atb == 2){
        atbilde = false;
    }else{
        atbilde=true;   
    }
}while(atbilde == false);

do{
    cout<<"vai es gribu gulet\n\n1) ja \n2) ne\n3) protams\n4) ofc\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2){
        atbilde=false;
    }else{
        atbilde=true;
    }
}while(atbilde == false);


}