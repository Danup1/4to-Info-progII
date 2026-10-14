#include <iostream>
using namespace std;

int main() {
     int N;
    do{
        cout<<"ingresa numero de filas"<<endl; //aqui el usuario asignara una cantidad de filas
        cin>>N;
    }while (N<4);
    int matriz [N][2];
    int vector [N];
    for (int filas = 0; filas < N; filas++){
        for (int colum = 0; colum < N; colum++){
            cout<<"ingresa un numero"<<endl; //el usuario pondro los numeros que el quiera en la matriz
            cin>>matriz[filas][colum];
        }
    }
    for (int i= i; i< N; i++){
        vector[N] = matriz[i][0]+ matriz[i][1];
    }   
    if (N<4){
        cout<<"pertenece al cuadrante CI"<<endl;
    }else{
        if(N>4){
            cout<< "no pertenece a la clasificacion"<<endl;
        }
    }
    
    return 0;
}
