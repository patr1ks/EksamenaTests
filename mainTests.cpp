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
    cout<<"Kurus no siem operatoriem var izmantot dalisanai C++?\n\n1) \\\n2) *\n3) %\n4) &\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2 || atb == 4){
        atbilde=false;
    }else{
        atbilde=true;
    }
}while(atbilde == false);

do{
    cout<<"Ka inicializet mainigo C++?\n\n1) int a; a(10);\n2) int a (10)\n3) int a = 10;\n4) int a; a=10;\n\n Atbilde: ";
    cin>>atb;
    if(atb == 1 || atb == 2 ){
        atbilde=false;
    }else{
        atbilde=true;
    }
}while(atbilde == false);

do{
    cout<<"Kurs no siem operatoriem tiek izmantots, lai salidzinatu divas vienadibas vertibas C++?\n\n1) ==\n2) !=\n3) =\n4) ||\n\n Atbilde: ";
    cin>>atb;
    if(atb == 3 || atb == 4 ){
        atbilde=false;
    }else{
        atbilde=true;
    }
}while(atbilde == false);

do{
    cout<<"Kuri no siem ir derigi veidi, ka izvadit mainiga x vertibu?\n\n1) cout<<x;\n2) cout>>x;\n3) printf(x);\n4) cout<<\"Skaitla vertiba ir\"<<x;\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2 || atb == 3 ){
        atbilde=false;
    }else{
        atbilde=true;
    }
}while(atbilde == false);


}