#include <iostream> 
#include <queue>
using namespace std;

struct Canciones{
    string titulo;
    string cantante;
    string genero;
    int duracion;
}; 
typedef struct Canciones canciones;

//prototipo de funciones
void agregarF();
void agregarT();
void agregarE();

void eliminarF();
void eliminarT();
void eliminarE();

void vaciarF();
void vaciarT();
void vaciarE();

void mostrarF();
void mostrarT();
void mostrarE();

    queue<canciones> feliz;
    queue<canciones> triste;
    queue<canciones> estudiar;
int main(){
    
    int option = 0;

     bool continuar = true;
    do{
        int opcion = 0;
        cout << endl << "****MENU COLA DE CANCIONES****" << endl;
        cout << "1. Agregar una cancion a una cola" << endl;
        cout << "2. Eliminar una cancion de una cola" << endl;
        cout << "3. Vaciar una cola de reproduccion completa" << endl;
        cout << "4. Mostrar contenido de una cola de reproduccion" << endl;
        cout << "5. Finalizar programa" << endl;
        cout << "Ingrese la opcion: "; cin >> opcion; cin.ignore();
        cout << endl;

        switch (opcion){
        case 1:
            cout << "Ingrese la cola de reproduccion a la que quiere agregar la cancion:" << endl;
            cout <<"1. Feliz" << endl;
            cout <<"2. Triste" << endl;
            cout <<"3. Estudiar" << endl;
            do{
                cout << "Ingrese opcion: "; cin >> option; 
            }while(option>3 || option<1);
            cout << endl;
            cin.ignore();

            if(option==1){
                agregarF();
            }else if(option==2){
                agregarT();
            }else if(option==3){
                agregarE();
            }

            break;
        case 2:
            cout << "Ingrese la cola de reproduccion a la que quiere eliminar una cancion:" << endl;
            cout <<"1. Feliz" << endl;
            cout <<"2. Triste" << endl;
            cout <<"3. Estudiar" << endl;
            do{
                cout << "Ingrese opcion: "; cin >> option; 
            }while(option>3 || option<1);
            cout << endl;
            cin.ignore();

            if(option==1){
                eliminarF();
            }else if(option==2){
                eliminarT();
            }else if(option==3){
                eliminarE();
            }

            break;
        case 3:
            cout << "Ingrese la cola de reproduccion a la que quiere vaciar:" << endl;
            cout <<"1. Feliz" << endl;
            cout <<"2. Triste" << endl;
            cout <<"3. Estudiar" << endl;
            do{
                cout << "Ingrese opcion: "; cin >> option; 
            }while(option>3 || option<1);
            cout << endl;
            cin.ignore();

            switch (option){
            case 1:
                vaciarF();
                break;
            case 2:
                vaciarT();
                break;
            case 3:
                vaciarE();
                break;
            }
            break;

        case 4:
            cout << "Ingrese la cola de reproduccion a la que quiere mostrar:" << endl;
            cout <<"1. Feliz" << endl;
            cout <<"2. Triste" << endl;
            cout <<"3. Estudiar" << endl;
            do{
                cout << "Ingrese opcion: "; cin >> option; 
            }while(option>3 || option<1);
            cout << endl;
            cin.ignore();

            if(option==1){
                mostrarF();
            }else if(option==2){
                mostrarT();
            }else if(option==3){
                mostrarE();
            }

            break;

        case 5:
            continuar=false;
            cout << "Finalizando programa...";
            break;
        
        default:
            cout << "Ingrese una opcion valida" << endl;
            break;
        }
        
    }while(continuar);


    return 0;
}

//Para agregar
void agregarF(){
    //Llenar datos de la cancion
    canciones cancion;
    cout << "Ingrese los datos de la cancion: " << endl;
    cout << "Titulo: "; getline(cin,cancion.titulo);
    cout << "Artista: "; getline(cin, cancion.cantante);
    do{
        cout << "Duracion: "; cin >> cancion.duracion;
    }while(cancion.duracion<1);

    //Agregar a la cola
    feliz.push(cancion);
}

void agregarT(){
    //Llenar datos de la cancion
    canciones cancion;
    cout << "Ingrese los datos de la cancion: " << endl;
    cout << "Titulo: "; getline(cin,cancion.titulo);
    cout << "Artista: "; getline(cin, cancion.cantante);
    do{
        cout << "Duracion: "; cin >> cancion.duracion;
    }while(cancion.duracion<1);

    //Agregar a la cola
    triste.push(cancion);
}

void agregarE(){
    //Llenar datos de la cancion
    canciones cancion;
    cout << "Ingrese los datos de la cancion: " << endl;
    cout << "Titulo: "; getline(cin,cancion.titulo);
    cout << "Artista: "; getline(cin, cancion.cantante);
    do{
        cout << "Duracion: "; cin >> cancion.duracion;
    }while(cancion.duracion<1);

    //Agregar a la cola
    estudiar.push(cancion);
}


//Para eliminar
void eliminarF(){
    if(feliz.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        feliz.pop();
        cout << "Se ha eliminado la cancion satisfactoriamente" << endl;
    }
}

void eliminarT(){
    if(triste.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        triste.pop();
        cout << "Se ha eliminado la cancion satisfactoriamente" << endl;
    }
}

void eliminarE(){
    if(estudiar.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        estudiar.pop();
        cout << "Se ha eliminado la cancion satisfactoriamente" << endl;
    }
}

//Para vaciar
void vaciarF(){
    if(feliz.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        while(!feliz.empty()){
            feliz.pop();
        }
        cout << "Se ha vaciado la cola satisfactoriamente" << endl;
    }
}

void vaciarT(){
    if(triste.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        while(!triste.empty()){
            triste.pop();
        }
        cout << "Se ha vaciado la cola satisfactoriamente" << endl;
    }
}

void vaciarE(){
    if(estudiar.empty()){
        cout << "Underflow! La cola de reproduccion esta vacia" << endl;
    }else{
        while(!estudiar.empty()){
            estudiar.pop();
        }
        cout << "Se ha vaciado la cola satisfactoriamente" << endl;
    }
}

void mostrarF(){
    
    if(feliz.empty()){
        cout << "La cola de reproduccion esta vacia :)" << endl;
    }else{
        queue<canciones> copia;

        // Mostrando cola
        while(!feliz.empty()){
            canciones cancion=feliz.front();
            feliz.pop();
            copia.push(cancion);

            cout << "Mostrando datos de la cancion: " << ", ";
            cout << "Titulo: " << cancion.titulo << ", ";
            cout << "Cantante: " << cancion.cantante << ", ";
            cout << "Genero: " << cancion.genero << ", ";
            cout << "Duracion: " << cancion.duracion << " segundos." << endl;
        }

        //Transfiriendo de la copia a la cola

        while(!copia.empty()){
            canciones cancion = copia.front();
            copia.pop();
            feliz.push(cancion);
        }
    }
}

void mostrarT(){
    
    if(triste.empty()){
        cout << "La cola de reproduccion esta vacia :)" << endl;
    }else{
        queue<canciones> copia;

        // Mostrando cola
        while(!triste.empty()){
            canciones cancion=triste.front();
            triste.pop();
            copia.push(cancion);

            cout << "Mostrando datos de la cancion: " << ", ";
            cout << "Titulo: " << cancion.titulo << ", ";
            cout << "Cantante: " << cancion.cantante << ", ";
            cout << "Genero: " << cancion.genero << ", ";
            cout << "Duracion: " << cancion.duracion << " segundos." << endl;
        }

        //Transfiriendo de la copia a la cola

        while(!copia.empty()){
            canciones cancion = copia.front();
            copia.pop();
            triste.push(cancion);
        }
    }
}

void mostrarE(){
    
    if(estudiar.empty()){
        cout << "La cola de reproduccion esta vacia :)" << endl;
    }else{
        queue<canciones> copia;

        // Mostrando cola
        while(!estudiar.empty()){
            canciones cancion=estudiar.front();
            estudiar.pop();
            copia.push(cancion);

            cout << "Mostrando datos de la cancion: " << ", ";
            cout << "Titulo: " << cancion.titulo << ", ";
            cout << "Cantante: " << cancion.cantante << ", ";
            cout << "Genero: " << cancion.genero << ", ";
            cout << "Duracion: " << cancion.duracion << " segundos." << endl;
        }

        //Transfiriendo de la copia a la cola

        while(!copia.empty()){
            canciones cancion = copia.front();
            copia.pop();
            estudiar.push(cancion);
        }
    }
}
