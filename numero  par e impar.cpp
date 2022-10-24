#include <iostream>

using namespace std;

int main()
{
    int n=0, r =0;
    cout<<"Numero par o impar" << endl;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    
    r = n%2;
    if(r==1){
    cout << "el numero "<< n <<" es impar"<< endl;
    }
    if(r==0){
    cout << "El numero  "<< n <<" es par"<< endl;
        
    }
    
    return 0;
}
