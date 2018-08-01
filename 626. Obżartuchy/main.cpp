#include <iostream>
#include <math.h>

using namespace std;

int s,n,m;
double *c,*wynik;
const double doba = 24*60*60;

int main()
{
    cin>>s;

    wynik = new double[s];

    for(int i=0; i<s; i++){
        cin>>n>>m;
        c = new double[n];
        for(int j=0; j<n; j++){
            int t;
            cin>>t;
            c[j] = floor(doba/t);
            wynik[i] += c[j];
        }
        wynik[i] = ceil((wynik[i]/m));
    }
    for(int i=0; i<s; i++){
        cout<<wynik[i]<<endl;
    }
    return 0;
}
