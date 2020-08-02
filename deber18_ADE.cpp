#include <iostream>
using namespace std;
void imprimir (int a[],int n, int b[], int contador);
void ingresar(int a[],int n);
void multiplicar(int a[],int n, int b[], int contador,int c[]);



int main() {
 int i=0,j=0,c;
  int arreglo[10],arreglob[10];
  int arregloc[10];
  int n=10;
  int contador=0;
  
  ingresar(arreglo,n);
  cout << endl;
  imprimir(arreglo,n,arreglob,contador);

  cout << endl;
  multiplicar(arreglo,n,arreglob,contador,arregloc);
 
  
  return 0;
}

void ingresar(int a[],int n)
{
  
  for(int i=0;i<n;i++)
  {
    cout << "Ingrese los numero del arreglo" <<"["<< i+1 << "] : ";
    cin >> a[i];
  }
}

void imprimir(int a[] , int n , int b[] , int contador)
{ int j=0;
  for(int i=0;i<n;i++ )
  {
    if((a[i]>49)&&(a[i]<101))
{
  b[j]=a[i];
  j++;
  contador++;
  }
  }
  for(int j=0;j<contador;j++)
  {
    cout << b[j] << " ";
    
    
  }
}
void multiplicar(int a[],int n, int b[], int contador,int c[]){
  int j=0,i=0;
  //////////////////////
   //copia de arreglo original
 for(i=0;i<n;i++){
    
    c[i]=a[i];
  
  }
///////////////////

  for(int i=0;i<n;i++ )
  {
    if((c[i]>49)&&(c[i]<101))
{
  b[j]=c[i];
  j++;
  contador++;
  }
  }
  
  for(  int j=0;j<contador;j++)
  {
    
    cout<<b[j]*0.5<<" ";
  }



}
