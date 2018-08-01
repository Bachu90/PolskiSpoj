#include <iostream>

using namespace std;

int t, n, *wynik;

int main()
{
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        wynik = new int[n];

        for(int j=0; j<n; j++){
            cin>>wynik[j];
        }
        for(int j=1; j<=n; j++){
            if(j==n){
                cout<<wynik[0];
            }else{
                cout<<wynik[j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;

}
