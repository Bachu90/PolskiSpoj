#include <iostream>

using namespace std;

int D, N, k, o;

class CSkarb{

private:
    double x, y;
public:
    CSkarb(){
        x = 0;
        y = 0;
    }
    void dodajWskazowke(int kierunek,int odleglosc){
        switch(kierunek){
            case 0:
                y += odleglosc;
                break;
            case 1:
                y -= odleglosc;
                break;
            case 2:
                x -= odleglosc;
                break;
            case 3:
                x += odleglosc;
                break;
        }
    }
    void pobierzInstrukcje(){
        if(x == 0 && y == 0){
            cout<<"studnia";
        }else{
            if(x > 0){
                cout<<3<<" "<<x<< endl;
            }else if(x < 0){
                cout<<2<<" "<<(x*(-1))<<endl;
            }

            if(y > 0){
                cout<<0<<" "<<y<< endl;
            }else if(y < 0){
                cout<<1<<" "<<(y*(-1))<<endl;
            }
        }
        cout<<endl;
    }

};

int main()
{
    cin>>D;
    for(int i=0; i<D; i++){
        CSkarb Skarb;
        cin>>N;
        for(int j=0; j<N; j++){
            cin>>k>>o;
            Skarb.dodajWskazowke(k,o);
        }

        Skarb.pobierzInstrukcje();
    }
    return 0;
}
