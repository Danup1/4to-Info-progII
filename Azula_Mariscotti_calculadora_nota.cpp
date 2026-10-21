#include<iostream>
using namespace std;


float calcular_nota(float, float, int, int, int);
int ingresar_valor (int,int);

int main(){
    const float NOTA_MAX = 10.0;
    const float CANT_PREGUNTAS = 22.0;
    int cant_bien, cant_mal, cant_sr;
    float Puntaje_Correcto = NOTA_MAX/CANT_PREGUNTAS;
    float Puntaje_erroneo = (-0.25) * Puntaje_Correcto;
     cout << "Cantidad de preguntas: " << CANT_PREGUNTAS << "\nNota máxima: " 
    << NOTA_MAX << "\nPuntaje Correcto: " << Puntaje_Correcto << "\nPuntaje Erroneo: " << Puntaje_erroneo <<endl;
    do{
    cout << "Ingrese la cantidad de preguntas que respondió correctamente: "<<endl;
    cin >> cant_bien;
    }while (cant_bien < 0 || cant_bien > 22);
    
    do{
    cout << "Ingrese la cantidad de preguntas que respondió de manera errónea: "<<endl;
    cin >> cant_mal;
    }while (cant_mal < 0 || cant_mal > CANT_PREGUNTAS_cant_bien);
        
    do{
    cout << "Ingrese la cantidad de preguntas que no respondió: "<<endl;
    cin >> cant_sr;
    }while (cant_sr != CANT_PREGUNTAS-cant_bien-cant_mal);
    
        
    cout << "Nota final: " << calcular_nota(valor_pregunta_bien, valor_pregunta_mal, cant_bien, cant_mal, cant_sr);



    return 0;
}

float calcular_nota(float valor_bien, float valor_mal, int cant_bien, int cant_mal, int cant_sr){
    float nota_bien = valor_bien*cant_bien;
    cout<<"Puntaje que consiguió por contestar bien: "<<nota_bien <<endl;
    float nota_mal = valor_mal*cant_mal;
    cout<<"Puntaje que consiguió por contestar erróneamente: "<<nota_mal<<endl;
    float nota_potencial = cant_sr*valor_bien;
    cout<<"Puntaje que podría haber obtenido si contestaba correctamente las preguntas que dejó incompletas: "<<nota_potencial<<endl;
    return nota_bien+nota_mal;
}
int ingresar_valor( int minimo, int maximo){
    int valor;
    do{
        cout<<"ingrese un valor entre"<<minimo<<"y"<<maximo<<endl;
        cin>>valor;
    }while (valor< minimo||valor> maximo);
    return valor;
}
