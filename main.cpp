#include <iostream>

using namespace std;

int main()
{
    int wiekUzytkownika(16);
    int liczbaZnajomych(432);
    int Tablica[5];

    double pi(3.14159);

    bool jestMoimZnajomym(true);

    char litera('a');

    int i(0);

    for (i = 1 ; i < 6 ; i ++)
    {
        Tablica[i]=i;
    }

    cout << "Hello  world!" << endl << "Raz, dwa, trzy" << endl
    << wiekUzytkownika << " - " <<pi << endl;
    for  (i=1 ; i < 6 ; i++) {cout << Tablica[i];}

    [](float a, float b){
        return (std::abs(a) < std::abs(b));
    };


    return 0;
}
