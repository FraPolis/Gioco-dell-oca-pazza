#ifndef tabellone_hpp
#define tabellone_hpp

#include <stdio.h>
#include "casella.hpp"

#define MAX_DIM 100
using namespace std;

class tabellone {
private:
    // Vettore che contiene tutte le caselle del tabellone
    casella caselle[MAX_DIM];
    // Dimensione del vettore;
    int dim;
    
public:
    // Costruttore di default del 
    tabellone();
    void stampaTabellone();
    
    int getDim();
    void effetto(int n);
};

#endif /* tabellone_hpp */

