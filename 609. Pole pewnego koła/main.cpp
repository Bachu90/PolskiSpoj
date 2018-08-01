#include <iostream>
#include <math.h>

using namespace std;

double s,d,r;
const double pi = 3.141592654;

int main()
{
    cin>>r>>d;  //pobieranie promienia kuli i odleg³oœci od ich œrodków

    s = pi * (pow(r,2)-pow((d/2),2)); //obliczanie pola przeciecia z wykorzystaniem pitagorasa

    cout.setf(ios::fixed); //ustawienie trybu wyœwietlania
    cout.precision(2); //ustawienie precyzji do 2 miejsc po przecinku
    cout<<s;
    return 0;
}
