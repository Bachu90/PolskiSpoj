#include <iostream>

using namespace std;

int liczba, wynik;

int main()
{
    wynik = 0;
    while (cin >> liczba){
    wynik += liczba;
    cout << wynik << endl;
    }
    return 0;
}
