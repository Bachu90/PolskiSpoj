#include <iostream>

using namespace std;

int n, a, b, *wynik;
int main()
{
    cin>>n;
    if(n<1 || n>20){
        cout<<"Nieprawidlowe dane";
        return 0;
    }
    wynik = new int[n];

    for(int i=0; i<n; i++){
        cin>>a>>b;
        if((a<10 || a>30) || (b<10 || b>30)){
            wynik[i]=0;
        }
        else{
            if(a>b){
                wynik[i]=a;
                while(wynik[i]%b){
                    wynik[i]+=a;
                }
            }

            if(b>a){
                wynik[i]=b;
                while(wynik[i]%a){
                    wynik[i]+=b;
                }
            }
            if(a==b){
                wynik[i]=a;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(wynik[i]==0) cout<<"Nieprawidlowe dane"<<endl;
        else cout<<wynik[i]<<endl;
    }
    return 0;
}
