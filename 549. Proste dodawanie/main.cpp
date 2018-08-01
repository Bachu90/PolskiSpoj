#include <iostream>

using namespace std;

int main()
{
int ilosc_liczb;
int ilosc_testow;
double *tablica = NULL;
double *wynik = NULL;

cin >> ilosc_testow;
if(ilosc_testow <= 0 || ilosc_testow > 100){
    cout<<"Nieprawidlowa liczba testow";
    return 0;
}
wynik = new double[ilosc_testow];

for(int k=0; k < ilosc_testow; k++){
    cin >> ilosc_liczb;
    tablica = new double[ilosc_liczb];
    for (int i = 0; i < ilosc_liczb; i++){
        cin >> tablica[i];
    }
    wynik[k] = 0;
    for (int i = 0; i < ilosc_liczb; i++){
        wynik[k] += tablica[i];
    }
}
for(int k=0; k<ilosc_testow; k++){
    cout <<wynik[k]<< endl;
}
return 0;
}
