#include <iostream>

using namespace std;

int D,a,b,*w;

int wynik[10][4] = {
    0,0,0,0},
    {1,1,1,1},
    {6,2,4,8},
    {1,3,9,7},
    {6,4,6,4},
    {5,5,5,5},
    {6,6,6,6},
    {1,7,9,3},
    {6,8,4,2},
    {1,9,1,9}
};

int main(){

    cin>>D;
    while(D<1 || D>10){
        cout<<"Blad!"<<endl;
        cin>>D;
    }
    w=new int[D];
    for(int i=0; i<D; i++){
        cin>>a>>b;
        if(b==0){
            w[i]=1;
        }
        else{
            a=a%10;
            b=b%4;
            w[i] = wynik[a][b];
        }
    }
    for(int i=0; i<D; i++){
        cout<<w[i]<<endl;
    }

    return 0;
}
