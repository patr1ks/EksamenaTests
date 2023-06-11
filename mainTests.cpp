#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    system("cls");
bool atbilde;
int atb, rez, x=0;
do{
     system("cls");
    cout<<"1. Kuri no siem ir derigi veselu skaitlu datu tipi programma?\n\n1) int \n2) float\n3) short\n4) long\n\nAtbilde: ";
    cin>>atb;
    if(atb == 2){
        atbilde = false;
    }else{
        atbilde=true;  
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"2. Kurus no siem operatoriem var izmantot dalisanai?\n\n1) \\\n2) *\n3) %\n4) &\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2 || atb == 4){
        atbilde=false;
    }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"3. Ka inicializet mainigo ?\n\n1) int a; a(10);\n2) int a (10)\n3) int a = 10;\n4) int a; a=10;\n\n Atbilde: ";
    cin>>atb;
    if(atb == 1 || atb == 2 ){
        atbilde=false;
   }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"4. Kurs no siem operatoriem tiek izmantots, lai salidzinatu divas vienadibas vertibas?\n\n1) ==\n2) !=\n3) =\n4) ||\n\n Atbilde: ";
    cin>>atb;
    if(atb == 3 || atb == 4 ){
        atbilde=false;
   }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"5. Kuri no siem ir derigi veidi, ka izvadit mainiga x vertibu?\n\n1) cout<<x;\n2) cout>>x;\n3) printf(x);\n4) cout<<\"Skaitla vertiba ir\"<<x;\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2 || atb == 3 ){
        atbilde=false;
   }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);


do{
     system("cls");
    cout<<"6. Ar kuriem datu tipiem var veikt šādas darbības: +, -, *, / ?\n\n1) string\n2) long\n3) short\n4) double\n\n Atbilde: ";
    cin>>atb;
    if(atb == 1){
        atbilde=false;
   }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"7. Kurus datu veidus izmanto, prieks decimalskaitliem?\n\n1) double\n2) float\n3) int(x);\n4) long double\n\n Atbilde: ";
    cin>>atb;
    if(atb == 3){
        atbilde=false;
   }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"8. Kuri no siem operatoriem tiek izmantoti pieskirsanai?\n\n1) =*\n2) =+\n3) +=(x);\n4) *=\n\n Atbilde: ";
    cin>>atb;
    if(atb == 1 || atb == 2){
        atbilde=false;
    }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"9. Kuri no siem datu tipiem ir isti?\n\n1) unsigned double\n2) unsigned short\n3) unsigned long\n4) unsigned float\n\n Atbilde: ";
    cin>>atb;
    if(atb == 1 || atb == 4){
        atbilde=false;
    }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

do{
     system("cls");
    cout<<"10. Kuras no sim ir operacijas ar bool?\n\n1) &&\n2) ??\n3) ||\n4) ^\n\n Atbilde: ";
    cin>>atb;
    if(atb == 2 || atb == 4){
        atbilde=false;
    }else{
        atbilde=true;
    }
    x=0;
    x++;
    if(x<1){
    rez++;
    }
}while(atbilde == false);

 system("cls");
cout<<"Atbildes atbildetas pareizi ar pirmo reizi: "<<rez;

}


