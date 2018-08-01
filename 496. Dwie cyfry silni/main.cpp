#include <iostream>

using namespace std;

int D,*d,*j;
int n;

int main()
{
    cin>>D;
    while(D<1 || D>30){
        cin>>D;
    }
    d = new int[D];
    j = new int[D];

    for(int i=0; i<D; i++){
        cin>>n;
        while(n<0){
            cin>>n;
        }

        switch(n){
            case 0:
            case 1:
                d[i] = 0;
                j[i] = 1;
                break;
            case 2:
                d[i] = 0;
                j[i] = 2;
                break;
            case 3:
                d[i] = 0;
                j[i] = 6;
                break;
            case 4:
                d[i] = 2;
                j[i] = 4;
                break;
            case 5:
            case 6:
            case 8:
                d[i] = 2;
                j[i] = 0;
                break;
            case 7:
                d[i] = 4;
                j[i] = 0;
                break;
            case 9:
                d[i] = 8;
                j[i] = 0;
                break;
            default:
                d[i] = 0;
                j[i] = 0;
                break;
        }
    }

    for(int i=0; i<D; i++){
        cout<<d[i]<<" "<<j[i]<<endl;
    }
    delete [] d;
    delete [] j;

    return 0;
}
