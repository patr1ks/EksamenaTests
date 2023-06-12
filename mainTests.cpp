#include <iostream>
#include <vector>
using namespace std;

int rez=0;
void Atbilde(string jaut, int sk1, int sk2 ){
    int atb, punkts=1;
    bool pareizi =false;
    do{
         cout<<jaut;
         
        do{
        cin>>atb;
        }while(atb<1 || atb>4 );
        if(atb == sk1 || atb == sk2){
            cout<<"Nepareizi!\n";
            punkts--;
        }else{
            pareizi = true;
            cout<<"Pareizi!\n";
            if(punkts == 1){
                rez++;
            }   
        }
    }while(pareizi==false); 
}

int main() {
system("cls");
vector<vector<int>> nAtb = {
{2,0},{2,4},{1,2},{3,4},{2,3},{1,0},{3,0},{1,2},{1,4},{2,4}
};

string jaut[10] = {
    "1. Kuri no siem ir derigi veselu skaitlu datu tipi programma?\n\n1) int \n2) float\n3) short\n4) long\n\nAtbilde: ",
    "2. Kurus no siem operatoriem var izmantot dalisanai?\n\n1) \\\n2) *\n3) %\n4) &\n\n Atbilde: ",
    "3. Ka inicializet mainigo ?\n\n1) int a; a(10);\n2) int a (10)\n3) int a = 10;\n4) int a; a=10;\n\n Atbilde: ",
    "4. Kurs no siem operatoriem tiek izmantots, lai salidzinatu divas vienadibas vertibas?\n\n1) ==\n2) !=\n3) =\n4) ||\n\n Atbilde: ",
    "5. Kuri no siem ir derigi veidi, ka izvadit mainiga x vertibu?\n\n1) cout<<x;\n2) cout>>x;\n3) printf(x);\n4) cout<<\"Skaitla vertiba ir\"<<x;\n\n Atbilde: ",
    "6. Ar kuriem datu tipiem var veikt sadas darbibas: +, -, *, / ?\n\n1) string\n2) long\n3) short\n4) double\n\n Atbilde: ",
    "7. Kurus datu veidus izmanto, prieks decimalskaitliem?\n\n1) double\n2) float\n3) int(x);\n4) long double\n\n Atbilde: ",
    "8. Kuri no siem operatoriem tiek izmantoti pieskirsanai?\n\n1) =*\n2) =+\n3) +=(x);\n4) *=\n\n Atbilde: ",
    "9. Kuri no siem datu tipiem ir isti?\n\n1) unsigned double\n2) unsigned short\n3) unsigned long\n4) unsigned float\n\n Atbilde: ",
    "10. Kuras no sim ir operacijas ar bool?\n\n1) &&\n2) ??\n3) ||\n4) ^\n\n Atbilde: "
    };

    cout<<"\x1b[31mTests par temu \"Mainigie, to datu tipi, pamatdarbibas darbam ar tiem c++\" \x1b[0m\n\n";
    cout<<"\033[36mTesta ir 10 jautajumi. Katram jautajumam ir 4 atbilzu varianti.\nNo 4 atbilzu variantiem pareizas ir 2 vai 3 atbildes. \033[0m\n";
    cout<<"\033[36mTesta beigas paradis uz cik jautajumiem tika atbildets pareizi ar pirmo meginajumu. \033[0m\n";
    cout<<"\033[36mNospied enter lai saktu testu: \033[0m";
    cin.ignore();
    system("cls");

    for(int i =0; i<10; i++){
     for(int j=0; j<1; j++){
        Atbilde(jaut[i],nAtb[i][j], nAtb[i][j+1]);  
     }   
    }
    cout<<"Jautajumi atbildeti pareizi ar pirmo meginajumu: "<<rez;
}
 