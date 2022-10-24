#include <iostream>

using namespace std;

int main()
{
    int n=0, m=0;
    cout<<"Tabla de Multiplicar" << endl;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    for(int i=1; i <= 10; i++){
       m=n * i;
       
       cout << n << " x " << i << " = "<< m << endl;
    }
    
    return 0;
}
