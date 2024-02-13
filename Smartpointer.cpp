#include <stdio.h>
#include <iostream>
#include <memory>

using namespace std;

class Pendejos
{
private:
    string nombre;
    int edad;
public:
    Pendejos(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
        printf("El pendejo %s acaba de nacer\n",nombre.c_str());
    };
    ~Pendejos(){
        printf("El pendejo %s a sido erradicado\n",nombre.c_str());
    };

    void Pendejada(){
        printf("El pendejo de %s de %d acaba de hacer una pendejada\n",nombre.c_str(),edad);
    }

};

int main(){

    //Pendejos obj1("gabriel",21);
    //Pendejos * obj1 = new Pendejos("gabriel",21);
    unique_ptr<Pendejos> pendejo1 {new Pendejos("Alexis",21)};

    pendejo1 ->Pendejada();

    return 0;
}