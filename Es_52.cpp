#include <iostream>
#include <stdlib.h>

using namespace std;

int A[10], i;

int main()
{
  for (i=0; i<10; i++)
  {
      cout<<"Inserisci il " <<i+1 <<" elemento: ";
      cin>>A[i];    
  }
  system ("CLS");
  
  
  for (i=0; i<10; i++)
  {
      if (i<3)
      {
        A[i]=A[i]*2;
        cout<<A[i] <<'\t';
      }
      else
        cout<<A[i] <<'\t';
  }
  cout<<endl;
  
  
  system ("PAUSE");
  return 0;
}
