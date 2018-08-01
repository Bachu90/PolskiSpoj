#include <iostream>

using namespace std;

int t, n, *liczby;

int main()
{
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        liczby = new int[n];
        for(int j=0; j<n; j++){
            cin>>liczby[j];
        }

        for(int k=n-1; k>=0; k--){
            cout<<liczby[k]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
