#include<iostream>
#include<cstdlib>

using namespace std;

bool test(int n)
{
  if(n<2)
    return false;

  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;
}

int main()
{
  int liczba[100000];
  int ile;

  cin>>ile;

  for(int i=0; i<ile; i++){
        cin>>liczba[i];
  }

  for(int j=0; j<ile; j++){
      if(test(liczba[j]))
        cout<<"TAK"<<endl;
      else
        cout<<"NIE"<<endl;
  }

  system("pause");
  return 0;
}
